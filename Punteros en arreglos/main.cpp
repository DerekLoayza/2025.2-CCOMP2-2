#include <iostream>
using namespace std;

//Esto lo usaremos mas adelante
void impArrPun(int *arr, int tam){
    for (int i=0; i<tam ;i++, arr++){
        cout << *arr << " ";
    }}


void reverseArray(int *ini, int *fin) {
    while(ini < fin) {
        int tmp = *ini;
        *ini = *fin;
        *fin = tmp;
        ini++;
        fin--;
    } }

void bubblesort(int *arr, int size) {
    int *ptr = arr;
    for(int i = 0; i < size; i++) {
        for(ptr = arr; ptr < arr+size-i-1; ptr++) {
            if(*ptr > *(ptr+1)) {
                int tmp = *ptr;
                *ptr = *(ptr+1);
                *(ptr+1) = tmp;
            }}}}
 /*Implemente una función que reciba un arreglo de enteros y su
 tamaño y duplique todos los elementos del arreglo  */
void duplicateElems(int *arr, int tam) {
    for(int i = 0; i < tam; i++) {
        *(arr+i) *= 2;
    }}


int main() {

    int arreglo[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arreglo) / sizeof(arreglo[0]);

    int *ptr;
    ptr = &arreglo[0]; //Apuntas a tu direccion, puede ser tmb   arreglo

    /*Un arreglo es un puntero apuntando al primer elemento
        Aca da las direcciones de memoria*/
    cout << &arreglo[0] << endl; //Puedes poner tmb   &arreglo[0]  o  &*(arreglo)
    cout << (arreglo+0) << endl;
    cout << (arreglo+1) << endl;
    cout << (arreglo+2) << endl;
    cout << (arreglo+3) << endl;
    cout << (arreglo+4) << endl;
    cout << (arreglo+5) << endl; // Todo esto direcciones de memoria

    //Aca va a dar los elementos del arreglo
    cout << *ptr << endl;
    ptr++;
    cout << *ptr<< endl;
    ptr++;
    cout << *ptr << endl;

/* Esto se puede sintetisar en un for
 IMPRIME TODOS LOS ELEMENTOS DE UN ARR CON PUNTEROS
        A esto se le llama aritmetica de punteros  */
    cout << "Imprimir arr con punteros con for: " ;
    int *ptr1 = &arreglo[0];
    for(int i = 0; i < size; i++, ptr1++) {
        cout << *ptr1 << " "; }
    cout << endl;
//Aca lo puedes imprimir con una funcion de impArrPun
    cout << "funcion arreglo: ";
    impArrPun(arreglo,7);
    cout << endl;


    reverseArray(arreglo, arreglo+size-1);
    cout << endl ;
    impArrPun(arreglo, size);
    cout << endl ;
    bubblesort(arreglo, size);
    impArrPun(arreglo, size);
    cout << endl ;
    duplicateElems(arreglo, size);
    impArrPun(arreglo, size);
    cout << endl ;


    cout << "--------------" << endl;


//IMPRIME UN ARR INVERTIDO CON PUNTEROS
//OJOOOOOOOOOOOOOOOO, ESTO SOLO IMPRIME EL ARR INVERTIDO, NO INIVERTE EL ARR Y LUEGO LO IMPRIME
    int *ptr2=arreglo+6; //Una variable que apunta al ultimo caracter del arr
    for(int i=0; i<size /*O puede ser 7*/; i++, ptr2--)
        cout << *ptr2 << " ";
    cout << endl;

//Con while
    int *ptr4=arreglo;
    while(ptr4<=(arreglo+6)){
        cout << *ptr4 << " ";
        ptr4++; }
    cout << endl;
    int *ptr5=arreglo+6;
    while (ptr5>=arreglo){
        cout << *ptr5 << " ";
        ptr5--; }


    return 0;
}
