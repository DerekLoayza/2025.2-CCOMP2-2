#include <iostream>

using namespace std;

int main()
{
    /* ESTO NO SE PORQUE NO FUNCIONA CUANDO LE QUITO EL COMENTARIO
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

    int numero1=0, numero2=0;
    cout << "Dame dos numeros" << endl;
    cin >> numero1 >> numero2;
    if (numero1 > numero2){
        cout <<"El primero numero es el mayor";
    }
    else
        cout <<"El segundo numero es el mayor";

    return 0;
}
