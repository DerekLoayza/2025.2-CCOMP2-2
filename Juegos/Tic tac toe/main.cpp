#include <iostream>

using namespace std;

char tablero[3][3];  // Tablero 3x3

// Inicializar tablero con espacios vacíos
void inicializar() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tablero[i][j] = ' ';
        }
    }
}

// Mostrar el tablero
void mostrar() {
    cout << "   1   2   3" << endl;
    for (int i = 0; i < 3; i++) {
        cout << (i + 1) << " ";
        for (int j = 0; j < 3; j++) {
            cout << "| " << tablero[i][j] << " ";
        }
        cout << "|" << endl;
        cout << "   -----------" << endl;
    }
}

// Verificar si hay un ganador ('X' o 'O')
char verificarGanador() {
    // Filas
    for (int i = 0; i < 3; i++) {
        if (tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2] && tablero[i][0] != ' ') {
            return tablero[i][0];
        }
    }
    // Columnas
    for (int j = 0; j < 3; j++) {
        if (tablero[0][j] == tablero[1][j] && tablero[1][j] == tablero[2][j] && tablero[0][j] != ' ') {
            return tablero[0][j];
        }
    }
    // Diagonales
    if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] && tablero[0][0] != ' ') {
        return tablero[0][0];
    }
    if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] && tablero[0][2] != ' ') {
        return tablero[0][2];
    }
    return ' ';  // No hay ganador
}

// Verificar si el tablero está lleno (empate)
bool estaLleno() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tablero[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    inicializar();
    char jugador = 'X';  // Empieza con X
    bool juegoTerminado = false;

    cout << "¡Bienvenido a 3 en Raya!" << endl;
    cout << "Jugadores: X (primero) y O. Ingresa fila (1-3) y columna (1-3)." << endl << endl;

    while (!juegoTerminado) {
        mostrar();

        int fila, col;
        cout << "Turno de " << jugador << ". Fila: ";
        cin >> fila;
        cout << "Columna: ";
        cin >> col;

        // Ajustar a índices 0-2
        fila--;
        col--;

        // Validar entrada
        if (fila < 0 || fila > 2 || col < 0 || col > 2 || tablero[fila][col] != ' ') {
            cout << "Movimiento inválido. Intenta de nuevo." << endl;
            continue;
        }

        // Colocar marca
        tablero[fila][col] = jugador;

        // Verificar ganador o empate
        char ganador = verificarGanador();
        if (ganador != ' ') {
            mostrar();
            cout << "¡" << ganador << " gana!" << endl;
            juegoTerminado = true;
        } else if (estaLleno()) {
            mostrar();
            cout << "¡Empate!" << endl;
            juegoTerminado = true;
        } else {
            // Alternar jugador
            jugador = (jugador == 'X') ? 'O' : 'X';
        }
    }

    cout << "¡Fin del juego!" << endl;
    return 0;
}
