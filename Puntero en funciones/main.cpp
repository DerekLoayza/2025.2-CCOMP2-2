#include <iostream>
using namespace std;

//Crea una funcion que imprima un arrreglo con punteros o pasos de referencia
    void ImprimirArr(int *arr, int tam){ //Das la direccion de mem del primer elemento y de ahi avanzas
    cout << "[ ";
    for (int i=0; i< tam; i++)
        cout << arr[i] << " ";
    cout << "]" << endl; }

//Crea una funcion que intercambie dos elementos
    void intercambio(int *a, int *b){
        int ayuda=*a;
        *a=*b;
        *b=ayuda; }


//Implemente una funcion para invertir los elementos de un arr con punteros
   void invertir(int *inicio, int *final){
    while(inicio<final){
      intercambio(inicio,final);
      inicio++;
      final--; }
}
    //Lo mismo pero recursivamente
    void reverseArray(int *ini, int *fin) {
    if (ini >= fin)  
        return;
    int ayuda = *ini;
    *ini = *fin;
    *fin = ayuda;
    reverseArray(ini + 1, fin - 1); }



int main()
{
    int arr[]={1,2,3,4,5};
    int tam= sizeof(arr)/sizeof(arr[0]);
    ImprimirArr(arr, tam);

    int x=10, y=20;
    intercambio(&x,&y);
    cout << "x = " << x << endl << "y = " << y << endl;

    invertir(arr, arr+tam-1);
    ImprimirArr(arr, tam);
    reverseArray(arr, arr+tam-1);
    ImprimirArr(arr, tam);

/* TAMBIEN PUEDE SER ASI SIN FUNCIONES
    int *ptrIni = &arr[0];
    int *ptrFin = &arr[tam-1];
    ImprimirArr(arr, tam);

    while(ptrFin >= ptrIni) {
        int tmp = *ptrIni;
        *ptrIni = *ptrFin;
        *ptrFin = tmp;

        ptrIni++;
        ptrFin--;
    }
    ImprimirArr(arr, tam);
*/
    return 0;
}
