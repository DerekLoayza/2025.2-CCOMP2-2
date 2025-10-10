#include <iostream>
using namespace std;
/*Crear una matriz de numeros enteros (10 x 10) aleatorios de 0 - 100,
despues verificar cuales numeros son primos y cuales no son, finalmente,
crear una seguida matriz donde van primero los numeros primos ordenadas
de mayor a menor  y finalmente colocar los numeros no primos ordenadas de mayor a menor.*/
#include <iostream>

using namespace std;

/*
void dibujarRomboSimple(int N) {
    // Validamos que sea un n�mero impar positivo para una simetr�a perfecta
    if (N <= 0 || N % 2 == 0) {
        cout << "Error: El tama�o debe ser un n�mero impar positivo (Ej: 5, 7, 9)." << endl;
        return;
    }
    int C = N / 2;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            int DV = i - C;
            if (DV < 0) {
                DV = -DV;
            }

            int DH = j - C;
            if (DH < 0) {
                DH = -DH;
            }


            int distancia = DV + DH;


            if (distancia == C) {
                cout << "* ";
            }

            else if (distancia < C) {
                cout << "@ ";
            }

            else {
                cout << "  ";
            }
        }


        cout << endl;
    }
} */

int main() {

    int N;
    cout << "Ingrese el tama�o impar (N) de la matriz: ";
    cin >> N;
    // Calcula el �ndice del centro. Ej: Si N=5, C=2.
    int C = N / 2;

    // Bucle para recorrer las filas (i) de 0 hasta N-1
    for (int i = 0; i < N; i++) {
        // Bucle anidado para recorrer las columnas (j) de 0 hasta N-1
        for (int j = 0; j < N; j++) {

            // Calculo Manual del Valor Absoluto (sin la librer�a cmath):
            // 1. Distancia Vertical (DV)
            int DV = i - C;
            if (DV < 0) { // Si la distancia es negativa (arriba del centro)
                DV = -DV;  // La convierte a positiva
            }

            // 2. Distancia Horizontal (DH)
            int DH = j - C;
            if (DH < 0) { // Si la distancia es negativa (izquierda del centro)
                DH = -DH; // La convierte a positiva
            }

            // La distancia total es la suma de las distancias (Manhattan)
            int distancia = DV + DH;

            // ----------------------------------------------------
            // L�gica Condicional para dibujar
            // ----------------------------------------------------

            // CONDICI�N 1: Si es exactamente el centro
            if (distancia == C) {
                cout << "* ";
            }
            // CONDICI�N 2: Interior del Rombo
            // Si la distancia es MENOR que el radio C, es el interior.
            else if (distancia < C) {
                cout << "@ ";
            }
            // CONDICI�N 3: Espacio Exterior
            else {
                cout << "  "; // Dejamos dos espacios para alineaci�n
            }
        }

        // Al terminar la fila, saltamos de l�nea
        cout << endl;
    }

    /*
    cout << "Rombo 5x5:\n";
    dibujarRomboSimple(5); */
    return 0;
}
