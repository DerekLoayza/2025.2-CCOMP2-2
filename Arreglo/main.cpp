#include <iostream>
#include <cstdlib> //Estas librerias son para
#include <ctime> //que funcionen el random
using namespace std;
//Implementa una funcion que reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos del arreglo
    long sumar(int arr[], int tamano) {
        long sum = 0;
        for (int i = 0; i < tamano; i++) {
            sum = sum + arr[i]; }
        return sum; }
//Una funcion RECURSIVA que de la suma de un arreglo
    long sumaArreglo(int arr[], int tamano){             //VER ESTE EJERCICIO CON CASO BASE 0
        long suma=0;
        if (tamano == 1)
            return arr[0];
        else
            return arr[tamano-1]+sumaArreglo(arr, tamano-1 ); }

//Implementa una funcion que invierta los elementos de un arreglo
    void invertir(int arr[], int tamano){
        for(int i=0, j=tamano-1; i < j; i++ , j--){
            int tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        } }
//Invierte los elementos de un arr RECURSIVAMENTE
    void invertirArreglo(int arreglo[], int inicio, int fin){
        if (inicio>=fin)
            return ; //Aca no retorna nada porque la f es void, solo modifica el arreglo directamente
        else{
            int temp =arreglo[inicio];
            arreglo[inicio] = arreglo[fin];
            arreglo[fin] = temp;
            invertirArreglo(arreglo, inicio + 1, fin - 1);  }}
/*Invierte un arreglo con swap
void invertir(int arreglo[], int inicio, int fin) {
    // si llega a la mitad del arreglo, no da nada
    if (inicio >= fin) {
        return;
    }

    // Intercambiamos el elemento del inicio con el del fin
    // std::swap es más legible y seguro que la implementación manual.
    swap(arreglo[inicio], arreglo[fin]);

    // Llamada Recursiva: Movemos los índices hacia el centro
    invertir(arreglo, inicio + 1, fin - 1); }
 */




int main(){
    //Un arreglo es un conjunto de elementos del mismo almacenados en memoria de forma consecutiva
    int arreglo[5]={10, 20, 30, 40, 50}; //Puedes poner un cout para caga [x] del arreglo para verlo
    cout << "La suma es " << sumar(arreglo, 5) << endl;
    cout << sumaArreglo(arreglo, 5)<< endl;
    invertir(arreglo, 5);
    int size= sizeof(arreglo)/sizeof(arreglo[0]);
    cout <<invertirArreglo(arreglo,0,size-1);//INVERTIR RECURSIVAMENTE

    int tamano=5;
    for (int i = 0; i < tamano; i++)
    cout << arreglo[i] << " ";





// Crear una matriz 4x4 con letras mayusculas arriba a la izquierda, minusculas abajo a la derechay numeros arriba a la derecha y abajo a la izquierda
	char LetrasNumeros[4][4];
    char tmpMayusculas[4];
    char tmpMinusculas[4];
    char tmpNumeros[8];

    std::srand(std::time(nullptr)); // semilla

    // Mayúsculas
    for (int i = 0; i < 4; i++) {
        tmpMayusculas[i] = 'A' + (std::rand() % 26);
    }
    // Minúsculas
    for (int i = 0; i < 4; i++) {
        tmpMinusculas[i] = 'a' + (std::rand() % 26);
    }
    // Números
    for (int i = 0; i < 8; i++) {
        tmpNumeros[i] = '0' + (std::rand() % 10);
    }
    int idxM = 0, idxm = 0, idxN = 0;
    // Q2 (mayúsculas) filas 0-1, col 0-1
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            LetrasNumeros[i][j] = tmpMayusculas[idxM++];
        }
    }
    // Q1 (números) filas 0-1, col 2-3
    for (int i = 0; i < 2; i++) {
        for (int j = 2; j < 4; j++) {
            LetrasNumeros[i][j] = tmpNumeros[idxN++];
        }
    }
    // Q3 (números) filas 2-3, col 0-1
    for (int i = 2; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            LetrasNumeros[i][j] = tmpNumeros[idxN++];
        }
    }
    // Q4 (minúsculas) filas 2-3, col 2-3
    for (int i = 2; i < 4; i++) {
        for (int j = 2; j < 4; j++) {
            LetrasNumeros[i][j] = tmpMinusculas[idxm++];
        }
    }
    // Imprimir
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << LetrasNumeros[i][j] << " | ";
        }
        std::cout << "\n";
    }
    return 0;
}
