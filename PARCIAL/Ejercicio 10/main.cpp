#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarMatrizAleatoria(char M[7][7]) {
    srand(time({}));
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            int tipo = rand() % 3; // 0: mayúscula, 1: minúscula, 2: número
            if (tipo == 0)
                M[i][j] = 'A' + rand() % 26;
            else if (tipo == 1)
                M[i][j] = 'a' + rand() % 26;
            else
                M[i][j] = '0' + rand() % 10;
        } } }

void formarRombo(char M1[7][7], char M2[7][7]) {
    int N = 7;
    int C = N / 2;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int DV = abs(i - C);
            int DH = abs(j - C);
            int distancia = DV + DH;

            if (distancia < C) {
                // Dentro del rombo → mayúsculas
                M2[i][j] = 'A' + rand() % 26;
            }
            else if (distancia == C) {
                // Borde del rombo → mayúsculas también
                M2[i][j] = 'A' + rand() % 26;
            }
            else {
                // Fuera del rombo: arriba números, abajo minúsculas
                if (i < C)
                    M2[i][j] = '0' + rand() % 10;
                else
                    M2[i][j] = 'a' + rand() % 26;
            }
        }
    }
}

void mostrarMatriz(char M[7][7], string nombre) {
    cout << nombre << ":\n";
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    char Matriz01[7][7];
    char Matriz02[7][7];

    generarMatrizAleatoria(Matriz01);
    formarRombo(Matriz01, Matriz02);

    mostrarMatriz(Matriz01, "Matriz01");
    mostrarMatriz(Matriz02, "Matriz02");

    return 0;
}
