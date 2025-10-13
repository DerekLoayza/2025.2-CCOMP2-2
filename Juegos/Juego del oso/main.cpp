#include <iostream>
using namespace std;

const int N = 5;
char tablero[N][N];

void inicializar() {
    char* ptr = &tablero[0][0];
    for (int i = 0; i < N * N; i++) {
        *(ptr + i) = '.';  // Usa aritmética de punteros para inicializar
    } }

void mostrar() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    } }

// Ver si una posición es válida
bool esValida(int f, int c) {
    return (f >= 0 && f < N && c >= 0 && c < N && tablero[f][c] == '.');
}

void colocar(int f, int c, char letra) {
    char* fila = tablero[f];
    *(fila + c) = letra;
}

int contarOsos() {
    int count = 0;
    char* inicio = &tablero[0][0];

    // Horizontales
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N - 3; j++) {
            if (tablero[i][j] == 'O' && tablero[i][j + 1] == 'S' && tablero[i][j + 2] == 'O') {
                count++;
            } } }

    // Verticales
    for (int j = 0; j < N; j++) {
        for (int i = 0; i <= N - 3; i++) {
            if (tablero[i][j] == 'O' && tablero[i + 1][j] == 'S' && tablero[i + 2][j] == 'O') {
                count++;
            } } }

    // Diagonales principales
    for (int i = 0; i <= N - 3; i++) {
        for (int j = 0; j <= N - 3; j++) {
            if (tablero[i][j] == 'O' && tablero[i + 1][j + 1] == 'S' && tablero[i + 2][j + 2] == 'O') {
                count++;
            } } }

    // Diagonales anti
    for (int i = 0; i <= N - 3; i++) {
        for (int j = 2; j < N; j++) {
            if (tablero[i][j] == 'O' && tablero[i + 1][j - 1] == 'S' && tablero[i + 2][j - 2] == 'O') {
                count++;
            } } }
    return count;
}

// Ver si el tablero está lleno
bool estaLleno() {
    char* ptr = &tablero[0][0];
    for (int i = 0; i < N * N; i++) {
        if (*(ptr + i) == '.') {
            return false;
        } }
    return true;
}



int main() {
    inicializar();
    int puntosJugador1 = 0;
    int puntosJugador2 = 0;
    int jugadorActual = 1;

    cout << "Bienvenido al Juego del Oso para 2 jugadores " << endl;
    cout << "Coloca 'O' o 'S' en el tablero . Los jugadores alternan turnos." << endl;
    cout << "Cada nuevo 'OSO' formado después de tu movimiento te da 1 punto por cada uno." << endl;
    cout << "El juego termina cuando el tablero está lleno. Gana el que tenga más puntos." << endl;

    while (!estaLleno()) {
        mostrar();
        cout << "Turno del Jugador " << jugadorActual << "." << endl;
        cout << "Puntos - Jugador 1: " << puntosJugador1 << ", Jugador 2: " << puntosJugador2 << endl;
        cout << "Osos totales actuales: " << contarOsos() << endl;

        int f, c;
        char letra;

        cout << "Ingresa fila (0-" << (N - 1) << "): ";
        cin >> f;
        cout << "Ingresa columna (0-" << (N - 1) << "): ";
        cin >> c;
        cout << "Ingresa letra (O o S): ";
        cin >> letra;

        if (!esValida(f, c)) {
            cout << "Posicion invalida o ocupada. Intenta de nuevo." << endl;
            continue;
        }
        if (letra != 'O' && letra != 'S') {
            cout << "Solo puedes colocar 'O' o 'S'. Intenta de nuevo." << endl;
            continue;
        }

        // Guardar osos antes del movimiento
        int ososAnteriores = contarOsos();

        colocar(f, c, letra);
        cout << "Letra colocada en (" << f << ", " << c << ")." << endl;

        // Contar osos después del movimiento
        int ososActuales = contarOsos();
        int nuevosOsos = ososActuales - ososAnteriores;
        if (jugadorActual == 1) {
            puntosJugador1 += nuevosOsos;
        } else {
            puntosJugador2 += nuevosOsos;
        }
        if (nuevosOsos > 0) {
            cout << "¡Genial! Formaste " << nuevosOsos << " nuevo(s) OSO(s). Ganaste " << nuevosOsos << " punto(s)." << endl;
        } else {
            cout << "No formaste ningun OSO nuevo esta vez." << endl;
        }
        cout << endl;

        // Alternar jugador: si es 1, pasa a 2; si es 2, pasa a 1
        if (jugadorActual == 1)
            jugadorActual = 2;
        else
            jugadorActual = 1;
    }

    // resultados
    mostrar();
    cout << "¡Tablero lleno! Fin del juego." << endl;
    cout << "Puntos finales - Jugador 1: " << puntosJugador1 << ", Jugador 2: " << puntosJugador2 << endl;
    if (puntosJugador1 > puntosJugador2)
        cout << "¡El Jugador 1 gana!" << endl;
     else if (puntosJugador2 > puntosJugador1)
        cout << "¡El Jugador 2 gana!" << endl;
   else
        cout << "¡Empate!" << endl;

    cout << "¡Bien jugado!" << endl;

    return 0;
}
