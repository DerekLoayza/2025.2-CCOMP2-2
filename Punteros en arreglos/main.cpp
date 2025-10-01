#include <iostream>
using namespace std;



int main() {

    int arreglo[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arreglo) / sizeof(arreglo[0]);

    int *ptr1;
    ptr1 = &arreglo[0];
//Aca va a dar los elementos del arreglo
    cout << *ptr1 << endl;
    ptr1++;
    cout << *ptr1<< endl;
    ptr1++;
    cout << *ptr1 << endl;
    int *ptr = &arreglo[0];
/* Esto se puede sintetisar en un for
    A esto se le llama aritmetica de punteros  */
    for(int i = 0; i < size; i++, ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

//Un arreglo es un puntero apuntando al primer elemento
    cout << arreglo << endl;
    cout << (arreglo+0) << endl;
    cout << (arreglo+1) << endl;
    cout << (arreglo+2) << endl;
    cout << (arreglo+3) << endl;
    cout << (arreglo+4) << endl;
    cout << (arreglo+5) << endl;


    return 0;
}
