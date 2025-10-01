#include <iostream>
using namespace std;
/* Puntero
Es una variable que almacena DIRECCIONES DE MEMORIA de otra variableo
  &= Sirve para obtener la direccion de memoria
  *= Sirve para obtener el valor de una direccion de memoria */

 int cuboPorReferencia(int* nptr){
    *nptr= *nptr * *nptr * *nptr;
    return *nptr;
    }

int main()
{
    int a=7;
    int *aptr=nullptr; //Importante para que no apunte a nada
    aptr=&a; // Asigna la direccion de a a aptr
    cout << "Direccion: " << &a;
    cout<< "\nSu valor es: "<< aptr<< endl;
    cout << "El valor de a es: "<< a;
    cout << "\nSu valor es: "<< *aptr<< endl;


    int numero=5;
    cout << numero << endl; // 5
    cuboPorReferencia(&numero); //Cambia el valor de 5 por su cubo
    cout << numero << endl; //5*5*5= 125


    int* ptr2;
    ptr2=&a;
    if(aptr==ptr2)
        cout << "Los dos tienen el mismo valor" << endl;
    else
        cout << "Nunca debio pasar";

//Puedes cambiar el valor de una variable, como lo hiciste con esta funcion de atras
    int x=10;
    int *ptr1=&x;
    *ptr1=10000;//Aca cambias el valor de x
    cout << x <<endl;

    return 0;
}


