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
    void invertirArr (int*ini , int *fin){
        while(ini<fin){
            intercambio(ini++,fin--);
        } }
    void invertirArrRe (int*ini , int *fin){
        if (ini>=fin)
            return;
        intercambio(ini, fin);
        invertirArrRe(++ini, --fin); }             //PORQUE ACA PONE EL ++ Y EL -- ADELANTE, SI SE PERO PORQUEE


int main()
{
    int arr[]={1,2,3,4,5};
    int tam= sizeof(arr)/sizeof(arr[0]);
    ImprimirArr(arr, tam);

    int x=10, y=20;
    intercambio(&x,&y);
    cout << "x = " << x << endl << "y = " << y << endl;

    invertirArr(arr, arr+tam-1);
    ImprimirArr(arr, tam);
    invertirArrRe(arr, arr+tam-1);
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
