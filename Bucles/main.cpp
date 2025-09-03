#include <iostream>
using namespace std;
int main()
{
/* Bucle WHILE
        while(Condicion) {
            instruccion 1
            instruccion 2

            incrementacion
        } */
    int i=1;
    while (i<10){//Si quieres que tambien imprima el 10 pones <=
        cout << i << endl;
        i=i+1; }
    i=9;
    while (i>=1){
        cout << i << endl;
        i=i-1;
        }

//Multiplos de 3 menores a 100
    int x=1;
    while (x<=100){
        if (x%3==0){
            cout << x << " " << endl;}
        x=x+1;//O tambien puedes poner x++;
        }
//Solicita un numero por teclado e indica si es primo                    NO ESTA BIEN, MUY COMPLEJO
    int num, y=1, w=0;
    cout << "Indica un numero: " << endl;
    cin >> num;
    while (y<=num){
            if (num%y==0){
                w++;}
    }
    cout << ( (w == 2) ? "Primo" : "No primo") << endl;

//Pide un programa que pida un numero e imprima los numeros primos menores que este
    int a, d=1,z=0;
    cout << "Dame un numero: " << endl;
    cin >> a;
    while (d<=a){
            if (a%d==0){
                z++;

            }
    }

/*Bucle FOR
    for (inicia una variable (si ya esta iniciada lo dejas en blanco) ; condicion ; incrementacion)
        instruccion 1
        instruccion 2 */

    return 0;
}
