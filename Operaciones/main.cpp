#include <iostream>

using namespace std;

int main()
{
    /*
    suma +
    resta -
    multi *
    divi /
    modulo %
    */
    int a=102;
    int result1=val % 10;
    int result2=val / 10;
    cout << "El resultado es: " << result1 << endl;
    cout << "El resultado 2 es: " << result2 << endl;
//Programa que pide un numero y devuelve ese numero en forma vertical
    int num = 0;
    cout << "Ingresa un numero por 4 digitos\n" ;
    cin >> num;
    cout << "El numero ingresado es: " << num <<endl;
    cout <<  num/1000 << endl;
    cout << (num%1000)/100 << endl;
    cout << (num%100)/10 << endl;
    cout <<  num%10 << endl;
    return 0;
}

