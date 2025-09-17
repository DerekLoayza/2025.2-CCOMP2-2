#include <iostream>
using namespace std;
int main()
{
    //Caracter final de una cadena -> '\0'
    string cad = "Ciencia de la computacion"; //El espacio en blanco cuenta como caracter
    cout << cad.at(24)<< endl; //Esta mostrando la posicion 5, recuerda que empieza por 0 1 2 ...

//Recorre la cadena y dime cuantas veces se repite un carcter
    char car ='i';
    int cont=0;
    int i=0;
    for(i=0; i<cad.length(); i++){//Esto es para recorrer la cadena entera
        if (cad.at(i)==car){
            cont++;
            cout << i << " ";}
        cout << cad.at(i)<< " ";
    }
    cout << endl << "El numero de veces que sale "<< car << " es: "<< cont << endl;

//Da una cadena y verificar si una cadena es un palindromo
    string cadena;
    cout << "Dame una cadena para ver si es palindromo: " ;
    cin >> cadena;
    int a=0;
    int contador=0;
    for (a=0; a<cadena.length()/2; a++){//Aca el /2 Porque solo tiene que ver hasta la mitad si es palindromo, sin el /2 recoreria toda la cadena de nueo
        if (cadena.at(a)==cadena.at(cadena.length()-a-1)){//ACA se pasa del rango,porque el largo es del 0 al 8, si a es 9, se va del rango por eso se le quita uno
            contador++;}
        else{
            cout << "No es palindromo " << endl;
            break;}
    }
    if (contador==a){
        cout << "Es palindromo"<< endl;                    //MEJORAR ESTO PARA QUE ESTE DENTRO DEL IF DEL PALINDROMOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
    }
//Inplementa una funcion que reciba dos numeros e intercambia sus valores
    void intercambiar(int &a, int &b) {                              //ESTA FUNCION VA ANTES DEL MAIN YEAAAAAAHH
        int temporal = a;
        a = b;
        b = temporal;
    }

    int x = 5, y = 10;
    std::cout << "Valores antes del intercambio: x = " << x << ", y = " << y << std::endl;

    intercambiar(x, y);
    std::cout << "Valores después del intercambio: x = " << x << ", y = " << y << std::endl;

    return 0;
}
