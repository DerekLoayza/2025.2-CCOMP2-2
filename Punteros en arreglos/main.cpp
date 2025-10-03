#include <iostream>
using namespace std;



int main() {

    int arreglo[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arreglo) / sizeof(arreglo[0]);

    int *ptr;
    ptr = &arreglo[0]; //Apuntas a tu direccion

    /*Un arreglo es un puntero apuntando al primer elemento
        Aca da las direcciones de memoria*/
    cout << arreglo << endl; //Puedes poner tmb   &arreglo[0]  o  &*(arreglo)
    cout << (arreglo+0) << endl;
    cout << (arreglo+1) << endl;
    cout << (arreglo+2) << endl;
    cout << (arreglo+3) << endl;
    cout << (arreglo+4) << endl;
    cout << (arreglo+5) << endl;

    //Aca va a dar los elementos del arreglo
    cout << *ptr << endl;
    ptr++;
    cout << *ptr<< endl;
    ptr++;
    cout << *ptr << endl;



/* Esto se puede sintetisar en un for
 IMPRIME TODOS LOS ELEMENTOS DE UN ARR CON PUNTEROS
        A esto se le llama aritmetica de punteros  */
    int *ptr1 = &arreglo[0];
    for(int i = 0; i < size; i++, ptr1++) {
        cout << *ptr1 << " "; }
    cout << endl;
//IMPRIME UN ARR INVERTIDO CON PUNTEROS
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
