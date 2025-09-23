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

int main(){
    //Un arreglo es un conjunto de elementos del mismo almacenados en memoria de forma consecutiva
    int arreglo[5];
    arreglo[0]=10;
    arreglo[1]=20;
    arreglo[2]=30;
    arreglo[3]=40;
    arreglo[4]=50; //Puedes poner un cout para caga [x] del arreglo para verlo
    cout << "La suma es " << sumar(arreglo, 5) << endl;

// Crear una matriz 4x4 con letras mayusculas, minusculas y numeros
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
