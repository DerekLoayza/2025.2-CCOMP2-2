#include <iostream>
using namespace std;

int longitud(char cad[]){
    int result=0;
    for (int i=0; cad [i] != '\0';i++)
        result ++;
    return result;

}

int main()
{
    int arr[]={10, 20, 30, 40, 50}
    char cad1[]={'c','i','e','n','c','i','a'};
    char cad2[]= "ciencia de la computacion";

    cour << arr << endl; //Esto no imprime todo el arreglo, averiguar como hacerlo sin usar una funcion

    cout << cad1 << endl;
    cout << cad2 << endl;

    cad1[0]='C';
    cad2[0]='C';
    cout << cad1 << endl;
    cout << cad2 << endl;

    cout << longitud(cad1) << endl;

    return 0;
}
