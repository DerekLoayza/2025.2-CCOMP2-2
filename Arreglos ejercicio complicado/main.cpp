#include <iostream>
using namespace std;

void dibujarRomboSimple(int N) {
    if (N <= 0 || N % 2 == 0) {
        cout << "Error: El tamaño debe ser un número impar positivo (Ej: 5, 7, 9)." << endl;
        return ;}

    int C = N / 2;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            int DV = i - C;
            if (DV < 0)
                DV = -DV;

            int DH = j - C;
            if (DH < 0)
                DH = -DH;


            int distancia = DV + DH;


            if (distancia == C)
                cout << "* ";
            else if (distancia < C)
                cout << "@ ";
            else
                cout << "  ";

        }
        cout << endl;
    } }

int main() {

    cout << "Rombo:\n";
    dibujarRomboSimple(3);
    return 0;
}
