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
    
ESTO NO SE PORQUE NO FUNCIONA CUANDO LE QUITO EL COMENTARIO
//*Programa que muestra las operaciones de 2 numeros
    int num1=20;
    float num2=8;
    int suma=num1+num2;
    int resta=num1-num2;
    int multiplicacion=num1*num2;
    float division=num1/num2;

    cout << "El resultado de tu suma es: " << suma <<endl;
    cout << "El resultado de tu resta es: " << resta <<endl;
    cout << "El resultado de tu multiplicacion es: " << multiplicacion <<endl;
    cout << "El resultado de tu division es: " << division <<endl;
    */
//*Programa que pide 2 numeros e indica cual es el mayor
    int numero1=0, numero2=0;
    cout << "Dame dos numeros" << endl;
    cin >> numero1 >> numero2;
    if (numero1 > numero2){
        cout <<"El primero numero es el mayor";
    }
    else
        cout <<"El segundo numero es el mayor";
/
    int a=102;
    int result1=val % 10;
    int result2=val / 10;
    cout << "El resultado es: " << result1 << endl;
    cout << "El resultado 2 es: " << result2 << endl;
//Programa que pide un numero y devuelve ese numero en forma vertical (Estudiar)
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


