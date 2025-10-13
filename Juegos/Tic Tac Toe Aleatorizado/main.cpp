#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time(NULL) como semilla
using namespace std;

char tablero[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void dibujar_tablero() {
    cout << tablero[0] << " | " << tablero[1] << " | " << tablero[2] << endl;
    cout << "---|---|---" << endl;
    cout << tablero[3] << " | " << tablero[4] << " | " << tablero[5] << endl;
    cout << "---|---|---" << endl;
    cout << tablero[6] << " | " << tablero[7] << " | " << tablero[8] << endl;
}

void turno_jugador1() {
    int posicion;
    bool valido = false;
    while (!valido) {
        cout << "Jugador 1 (X), elige posicion (1-9): ";
        cin >> posicion;
        if (posicion >= 1 && posicion <= 9) {
            posicion--;
            if (tablero[posicion] >= '1' && tablero[posicion] <= '9') {
                tablero[posicion] = 'X';
                valido = true;
            } else {
                cout << "Posicion ocupada. Intenta de nuevo.\n";
            }
        } else {
            cout << "Posicion invalida. Debe ser 1-9. Intenta de nuevo.\n";
        } } }

void turno_jugador2() {
    int posicion;
    bool valido = false;
    while (!valido) {
        cout << "Jugador 2, elige posicion (1-9): ";
        cin >> posicion;
        if (posicion >= 1 && posicion <= 9) {
            posicion--;
            if (tablero[posicion] >= '1' && tablero[posicion] <= '9') {
                // Genera aleatorio: 0 para 'O', 1 para 'X' (50/50)
                int aleatorio = rand() % 2;
                char simbolo = (aleatorio == 0) ? 'O' : 'X';
                cout << "Jugador 2 pone '" << simbolo << "' en la posicion " << (posicion + 1) << " (aleatorio).\n";
                tablero[posicion] = simbolo;
                valido = true;
            } else {
                cout << "Posicion ocupada. Intenta de nuevo.\n";
            }
        } else {
            cout << "Posicion invalida. Debe ser 1-9. Intenta de nuevo.\n";
        } } }

bool verificar_ganador() {
    // Filas
    if (tablero[0] == tablero[1] && tablero[1] == tablero[2]) return true;
    if (tablero[3] == tablero[4] && tablero[4] == tablero[5]) return true;
    if (tablero[6] == tablero[7] && tablero[7] == tablero[8]) return true;
    // Columnas
    if (tablero[0] == tablero[3] && tablero[3] == tablero[6]) return true;
    if (tablero[1] == tablero[4] && tablero[4] == tablero[7]) return true;
    if (tablero[2] == tablero[5] && tablero[5] == tablero[8]) return true;
    // Diagonales
    if (tablero[0] == tablero[4] && tablero[4] == tablero[8]) return true;
    if (tablero[2] == tablero[4] && tablero[4] == tablero[6]) return true;
    return false;
}

bool verificar_empate() {
    for (int i = 0; i < 9; i++) {
        if (tablero[i] >= '1' && tablero[i] <= '9') {
            return false;
        } }
    return true;
}

int main() {
    srand(time(NULL));  // Inicializa la semilla para rand() con tiempo actual (una vez por ejecución)

    cout << "Juego de 3 en raya. Posiciones:\n";
    dibujar_tablero();
    cout << "Jugador 1: siempre X. Jugador 2: elige posicion, pero pone 'O' o 'X' ALEATORIAMENTE (impredecible).\n";

    while (true) {
        turno_jugador1();
        dibujar_tablero();
        if (verificar_ganador()) {
            cout << "Jugador 1 gana!\n";
            break;
        }
        if (verificar_empate()) {
            cout << "Empate!\n";
            break;
        }
        turno_jugador2();
        dibujar_tablero();
        if (verificar_ganador()) {
            cout << "Jugador 2 gana!\n";  // Nota: Podría "ganar" con 'X' si el azar lo pone
            break;
        }
        if (verificar_empate()) {
            cout << "Empate!\n";
            break;
        }
    }
    return 0;}
