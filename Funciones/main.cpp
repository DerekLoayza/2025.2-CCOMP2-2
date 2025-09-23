#include <iostream>
#include <cmath> //Una nueva biblioteca que tiene muchas funciones matematicas
using namespace std;


// LAS FUNCIONES VAN ANTES DE LA FUNCION    INT MAIN


    int potencia(int base, int exp){
        int result =1;
        for (int z =0 ;z < exp ; z++){
            result=result*base;
        }
        return result;
    }

// Incremente una funcion que diga si un numero es primo o no
    bool esPrimo(int n){
        for (int i=2; i*i <=n; i++){
            if (n%i==0) //Evalua si tiene otro divisor
                return false; //Que no sea primo
            }
            return true;
    }

//Imrpimir cierta cantidad de numeros primos
    void imprimirNPrimos (int n) {
        int i=2;
        while (i<n){
            if (esPrimo(i))
                cout << i << " ";
            i++;
        }
        cout << endl;
    }

//Implemente una funcion que reciba un entero y retorne el numero de digitros que tiene dicho entero
    int contarDigitos(long long n){
        int contador=0;
        while (n>0){
            n=n/10;
            contador++;
        }
        cout << "La cantidad de digitos que tiene tu numero es: " << contador << endl;
    }

//Inplementa una funcion que reciba dos numeros e intercambia sus valores
    void intercambiar(int &a, int &b) {
        int temporal = a;
        a = b;
        b = temporal;
    }


int main()
{
    cout << potencia (3,4) << endl;

    int c=10;
    int a=c++; //Aca c vale 11, pero A vale 10 porque primero asignas y luego operas
    //int a=++c; // Aca los dos valen 11 porque primero operas y luego asignas
    cout << a << endl << c << endl;
    int b=10; //Si pusieras b-- o --b le restarias 1
    int d=--b;
    cout << ++ d << endl << b-- << endl; // Aca d se simplifica

//Para imprimir cierta cantidad de primos se pone:
    int i=2;
    while (i < 50){
        if (esPrimo(i))
            cout << i << " ";
        i++;
    }
    cout << endl;

//El anterior codigo se reemplaza con esta nueva funcion de imprimirNPrimos
    imprimirNPrimos(50);

    contarDigitos(14652);


    int x = 5, y = 10;
    cout << "Valores antes del intercambio: x = " << x << ", y = " << y << endl;

    intercambiar(x, y);
    cout << "Valores después del intercambio: x = " << x << ", y = " << y << endl;


    return 0;
}
