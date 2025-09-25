#include <iostream>
using namespace std;
int main()
{
    //Caracter final de una cadena -> '\0'
    string cad = "Ciencia de la computacion"; //El espacio en blanco cuenta como caracter
    cout << cad.at(24)<< endl; //.at sirve para mostrat la posicion 24, recuerda que empieza por 0 1 2 ...

    string cade = "ciencia";
    for(int i = 0; i < cade.length(); i++) {
        cout << cade[i] << " ";
    }
    cout << endl;

//Recorre la cadena y dime cuantas veces se repite un carcter
    char car ='i';
    int cont=0;
    for(int i=0; i<cad.length(); i++){//Esto es para recorrer la cadena entera
        if (cad.at(i)==car){//El at sirve para mostrar la posicion, o sea seria como un arr[]
            cont++;
    }}
    cout << endl << "El numero de veces que sale "<< car << " es: "<< cont << endl;

//Da una cadena y verificar si una cadena es un palindromo
    string cadena;
    cout << "Dame una cadena para ver si es palindromo: " ;
    cin >> cadena;
    bool esPalindromo = true;
    int contador=0;
    for (int a=0; a<cadena.length()/2; a++){//Aca el /2 Porque solo tiene que ver hasta la mitad si es palindromo, sin el /2 recoreria toda la cadena de nueo
        if (cadena.at(a)==cadena.at(cadena.length()-a-1)){//ACA se pasa del rango,porque el largo es del 0 al 8, si a es 9, se va del rango por eso se le quita uno
            contador++;}
        else{
            cout << "No es palindromo " << endl;
            esPalindromo = false;
            break;} }
    if (contador == cadena.length()/2)
    cout << "Es palindromo" << endl;

    return 0;
}
