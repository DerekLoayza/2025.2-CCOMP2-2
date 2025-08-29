#include <iostream>

using namespace std;

int main()
{
        /*Operadores logicos
    && = and
    || = or
    ! = negracion

    char val;
    cout << "Ingresa un caracter: " <<endl;
    cin >> val;
    cout << "Tu valor es: " << val << endl;
    int num = static_cast<int>(val);
    cout << "Tu valor numerico es: " << num << endl;
    */

//Escribe un programa que indique si el valor ingresado es un LETRA MAYUSCULA
    char valor;
    cout << "Ingresa un caracter" <<endl;
    cin >> valor;
    if (valor>=65 && valor<=90){
    cout << "El numero que ingresaste es una Letra Mayuscula" << endl;
    } else {
    cout <<"El numero que ingresaste no es una Letra Mayuscula" << endl;
    }

//Escribe un programa que indique si el valor ingresado es un LETRA MAYUSCULA o letra minuscula
    char valor1;
    cout << "Ingresa un caracter" <<endl;
    cin >> valor1;
    if (valor1>=65 && valor1<=90){
    cout << "El numero que ingresaste es una Letra Mayuscula" << endl;
    }
    if (valor1>=97 && valor1<=122){
    cout <<"El numero que ingresaste  es una letra minuscula" << endl;
    }

// Escribe un programa que indique si el valor ingresado es un numero
    char val;
    cout << "Ingresa un caracter" <<endl;
    cin >> val;
    if (val>=48 && val<=57){
    cout << "El numero que ingresaste es un numero" << endl;
    } else {
    cout <<"El numero que ingresaste no es un numero" << endl;
    }


    return 0;
}
