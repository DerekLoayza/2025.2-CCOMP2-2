#include <iostream>
using namespace std;
//Implementa una funcion que reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos del arreglo
    long sumar(int arr[], int tamaño){
    int sum=0;
    for (int i=0; i<tamaño; i++){
        sum=sum+arr[i];}
    cout << "La suma es " << sum << endl;}

int main()
{
    //Un arreglo es un conjunto de elementos del mismo almacenados en memoria de forma consecutiva
    int arreglo[5];
    arreglo[0]=10;
    arreglo[1]=20;
    arreglo[2]=30;
    arreglo[3]=40;
    arreglo[4]=50;
    cout << arreglo[0] << endl;
    cout << arreglo[1] << endl;
    cout << arreglo[2] << endl;
    cout << arreglo[3] << endl;
    cout << arreglo[4] << endl;

    cout << "La suma es " << sumar(arreglo, 5) << endl;
    return 0;
}
