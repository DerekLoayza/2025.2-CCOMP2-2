#include <iostream>

using namespace std;

int main()
{
    char num1=10; // Esto es un caracter 'A', PERO ESTO ESTA MAL = una cadena ("A")
    short num2=10;
    int num3=10;
    float num4=10;
    double num5=10;
    long long num6=10;
    long double num7=10;
    cout << sizeof(num1) << endl; // El sizeof sirve para ver el tamaño de una variable
    cout << sizeof(num2) << endl;
    cout << sizeof(num3) << endl;
    cout << sizeof(num4) << endl;
    cout << sizeof(num5) << endl;
    cout << sizeof(num6) << endl;
    cout << sizeof(num7) << endl;


    char val1=254; //Este es el mayor valor de char (En realidad es 255 pero ese es un caracter vacio)
    cout << "El valor es: " << val1 <<endl;
    val1=val1+1;
    cout << "El valor es: " << val1 <<endl;
    short val2=32767; //Este es el mayor valor de shor, al tener 2 bites (00000000 0000000) es mas grande que 1 bite
    cout << "El valor es: " << val2 <<endl;
    val2=val2+1;
    cout << "El valor es: " << val2 <<endl;
    unsigned short val3=32767; //Aca no se porque se pone el unsigned pero supera el limite de short
    cout << "El valor es: " << val3 <<endl;
    val3=val3+1;
    cout << "El valor es: " << val3 <<endl;


    //Vamos a castear (Convertir un chat a int) de el codigo ASCII
    char letra='A';
    int val =static_cast <int> (letra);
    cout << "El valor numerico de char es: " << val << endl;

    int nume=146;
    char valor =static_cast <char> (nume);
    cout << "El valor numerico de char es: " << valor << endl;

    return 0;
}
