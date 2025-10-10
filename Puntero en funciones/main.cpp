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
        invertirArrRe(++ini, --fin); }

/*  // Creo que mejor usas estos
void invertir(int array[], int tam) {
    for(int i = 0; i < tam; i++, tam--) {
        int tmp = array[i];
        array[i] = array[tam-1];
        array[tam-1] = tmp;
    }
}

void invertirPtr(int *ini, int *fin) {
    while(ini<=fin) {
        int tmp = *ini;
        *ini = *fin;
        *fin = tmp;
        ini++;
        fin--;
    }
}

void invertirArrRecursivoSimple(int *ini, int *fin) {
    // CASO BASE: Si el puntero inicial ya pasó o igualó al final, la inversión está completa.
    if (ini >= fin) {
        return; }

    // 1. Intercambio de los valores actuales (lógica de tu función 'invertirPtr')
    int tmp = *ini;
    *ini = *fin;
    *fin = tmp;

    // 2. Mover los punteros para la siguiente llamada.
    //    Usamos postfijo aquí, pero la clave es que la actualización ocurre ANTES
    //    de que la variable sea usada como argumento en la llamada recursiva.
    ini++; // El puntero ini se mueve hacia adelante
    fin--; // El puntero fin se mueve hacia atrás

    // 3. Llamada Recursiva: Se llama a la función con los punteros ya actualizados.
    invertirArrRecursivoSimple(ini, fin); }
*/

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

/*
    ImprimirArr(arr, tam);
    invertirPtr(arr, arr+tam-1);
    ImprimirArr(arr, tam);

    invertirArrRecursivoSimple(numeros, numeros + tam - 1);
    cout << "Invertido con recursivo alternativo: ";
    ImprimirArr(numeros, tam);  */
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
