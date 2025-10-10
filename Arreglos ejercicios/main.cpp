#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Este ejercicio es normal
void ordenarAsc(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char ayuda= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ayuda;
            } } } }

void ordenarDesc(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                char ayuda= arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ayuda;
            } } } }

void imprimir(char matriz[8][8]){
    for (int i=0; i<8;i++){
        for (int j=0; j<8; j++){
            cout << matriz[i][j] << " | ";
        }
        cout << endl;
    }}
/*Este otro es para full funciones + lo anterior
void generarMayusculas(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = ’A’ + (rand() % 26);
    }
}
void generarMinusculas(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = ’a’ + (rand() % 26);
    }
}
void generarNumeros(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = ’0’ + (rand() % 10);
    }
}


void llenarCuadrante(char matriz[8][8], char arr[], int &idx, int filaIni, int filaFin, int colIni, int colFin) {
    for (int i = filaIni; i < filaFin; i++) {
        for (int j = colIni; j < colFin; j++) {
            matriz[i][j] = arr[idx++];
        }  } }


void imprimirMatriz(char matriz[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << matriz[i][j] << " | ";
        }
        cout << "\n";
    }
}  */
int main (){

    char matriz[8][8];
    char mayusculas[16];
    char minusculas[16];
    char numeros[32];
    srand(time({}));

    for (int i=0; i<16;i++){
        mayusculas[i]='A'+(rand()%26);}
    for (int i=0; i<16;i++){
        minusculas[i]='a'+(rand()%26);}
    for (int i=0; i<32;i++){
        numeros[i]='0'+(rand()%10);}

ordenarAsc(mayusculas,16);
ordenarDesc(minusculas,16);
ordenarAsc(numeros,32);

    int idxma=0, idxmi=0, idxnu=0;

    for (int i=0; i<4;i++){
        for (int j=0; j<4; j++){
            matriz[i][j]=mayusculas[idxma++];}
    }
   for (int i=0; i<4;i++){
        for (int j=4; j<8; j++){
            matriz[i][j]=minusculas[idxmi++];}
    }
    for (int i=4; i<8;i++){
        for (int j=0; j<8; j++){
            matriz[i][j]=numeros[idxnu++];}
    }

    imprimir(matriz);
    /*
     generarMayusculas(tmpMayusculas, 16);
    generarMinusculas(tmpMinusculas, 16);
    generarNumeros(tmpNumeros, 32);

    ordenarAsc(tmpMinusculas, 16);
    ordenarDesc(tmpMayusculas, 16);
    ordenarAsc(tmpNumeros, 32);

    int idxm = 0, idxM = 0, idxN = 0;

    // Aca llama las funciones para que rellenen con los elementos generados aleatorios
    llenarCuadrante(LetrasNumeros, tmpMinusculas, idxm, 0, 4, 0, 4);
    llenarCuadrante(LetrasNumeros, tmpMayusculas, idxM, 0, 4, 4, 8);
    llenarCuadrante(LetrasNumeros, tmpNumeros, idxN, 4, 8, 0, 4);
    llenarCuadrante(LetrasNumeros, tmpNumeros, idxN, 4, 8, 4, 8);

    imprimirMatriz(LetrasNumeros);
    */
return 0;}
