#include <iostream>
using namespace std;


void printArray(int *arr, int tam){
  for (int i=0; i<tam; i++, arr++){
    cout << *arr << " " ;}}

int longitudCadenaConPtr(char *arr) {
    int len = 0;
    while(*arr++ != '\0')
        len++;
    return len;
}

//Da una funcion que cuente cuantas veces un caracter aparece en la cadena
int contarCarac(char *ptr, int car){
    int cont = 0;
    while(*ptr != '\0'){
        if(*ptr == car)
            cont++;
        ptr++;
    }
    return cont;}



int main()
{
    int arr[]={6,7,1,573,45,613};
    int size=sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    cout << endl ;

    cout << '\t' << arr << endl;
    char arr1[] = "Hola Mundo";
    cout << '\t' << arr1 << endl;
    cout << '\t' << arr1[0] << endl;
    cout << '\t' << arr1[1] << endl;
    cout << '\t' << arr1[2] << endl;
    cout << '\t' << arr1[3] << endl;

    char arr2[] = "ciencia";
    cout << longitudCadenaConPtr(arr2) << endl;
    char arr3[]= "ciencia";
    cout << contarCarac(arr3, 'e');


    return 0;
}
