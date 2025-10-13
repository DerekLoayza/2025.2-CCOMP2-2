#include <iostream>
using namespace std;

//Funcion sumar
int suma(int *arr, int size){
    int suma=0;
    for (int i=0; i<size; ++i)
        suma=suma+arr[i];
    return suma;
}
//Funcion mayusculas
void convertirMayusculas(char *arr, int size){
    for (int i=0; i<size; i++){
        if (arr[i]>='a' && arr[i]<='z'){
            arr[i]=arr[i]-32;
        }
    }
}

int main()
{
    int *ptr=nullptr;
    ptr= new int;
    *ptr=25;
    cout << "Direccion: " << ptr << endl;
    cout << "Valor: " << *ptr << endl;

    delete ptr;
    ptr=nullptr;

//Crea un arr dinamico, que el usuario de los elementos y su tamaño y calcula su suma
    int size=0;
    cout << "Dame el tamaño del arr:" << endl;
    cin >> size;
    int *ptr1=new int[size];
    for (int i=0; i<size;i++){
        cout << "Elemento [" << i << "]: ";
        cin >> ptr1[i];
    }
    for (int i=0; i<size; i++)
        cout << ptr1[i]<< " ";
    cout << endl;
    cout << suma(ptr1, size) << endl;
    delete[] ptr1;
    ptr1 = nullptr;

//Crea un arr dinamico y que retorne los elementos en mayusculas}
    int tam=0;
    cout << "Dame el tamaño del arr:" << endl;
    cin >> tam;
    char *ptr2=new char[tam];
    for (int i=0; i<tam;i++){
        cout << "Elemento [" << i << "]: ";
        cin >> ptr2[i];
    }
    for (int i=0; i<tam; i++)
        cout << ptr2[i]<< " ";
    cout << endl;
    convertirMayusculas(ptr2, tam);
    for (int i=0; i<tam; i++)
        cout << ptr2[i]<< " ";
    delete[] ptr2;
    ptr2 = nullptr;

    return 0;
}
