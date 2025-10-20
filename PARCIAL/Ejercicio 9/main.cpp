#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ImprimirMatriz(char M[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << M[i][j] << " ";
        cout << "\n";
    }
}

// ---------- FUNCIÓN 1: usando índices ----------
void Ordenar_Coordenadas(char M1[4][4], char M2[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if ( (i < 2 && j < 2) || (i >= 2 && j >= 2) ) {
                // Cuadrantes superior izq. e inferior der. → mayúsculas
                if (M1[i][j] >= 'a' && M1[i][j] <= 'z')
                    M2[i][j] = M1[i][j] - 32;
                else
                    M2[i][j] = M1[i][j];
            } else {
                // Los demás → minúsculas
                if (M1[i][j] >= 'A' && M1[i][j] <= 'Z')
                    M2[i][j] = M1[i][j] + 32;
                else
                    M2[i][j] = M1[i][j];
            }
        }
    }
}

// ---------- FUNCIÓN 2: usando punteros ----------
void Ordenar_Punteros(char M1[4][4], char M2[4][4]) {
    char* p1 = &M1[0][0];
    char* p2 = &M2[0][0];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {


            int k = i * 4 + j;// Crea un indice que recorre la matriz
            char c = *(p1 + k);
            if ( (i < 2 && j < 2) || (i >= 2 && j >= 2) ) {
                // Cuadrantes mayúsculas
                if (c >= 'a' && c <= 'z')
                    c -= 32;
            } else {
                // Cuadrantes minúsculas
                if (c >= 'A' && c <= 'Z')
                    c += 32;
            }
            *(p2 + k) = c; //Sobreescribe la matriz, pasandola a M2
        }
    }
}

int main() {
    srand(time(0));
    char M1[4][4], M2a[4][4], M2b[4][4];

    // Generar matriz aleatoria con letras
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            int tipo = rand() % 2;
            M1[i][j] = (tipo == 0) ? ('A' + rand() % 26) : ('a' + rand() % 26);
        }

    cout << "Matriz original ---\n";
    ImprimirMatriz(M1);

    Ordenar_Coordenadas(M1, M2a);
    cout << "\nMatriz ordenada (coordenadas []) ---\n";
    ImprimirMatriz(M2a);

    Ordenar_Punteros(M1, M2b);
    cout << "\nMatriz ordenada (punteros *) ---\n";
    ImprimirMatriz(M2b);

    return 0;
}
