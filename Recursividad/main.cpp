#include <iostream>
using namespace std;
    /*Cuando una funcion se llama a si misma
    n!=n*(n-1)!
    5!=4*3!   3*2!   2*1! */

//Crea una funcion que retorne el factorial de un numero
    long long factorial (long x){
    if(x==1 || x==0) //Caso base
        return 1;
    else
        return x*factorial(x-1); }

//Crea una funcion que retorne el fibonacci de un numero
    long long fibo(long x){
    if (x==0)
        return 0;
    if (x==1)
        return 1;
    else
        return fibo(x-1)+fibo(x-2); }

//Escribe una funcion que retorne cuandos numeros tiene un numero
    long long contarDigitos(long x){
    if (x<10)
       return 1;
    else
       return 1 + contarDigitos(x/10); }

//Da un numero y verifica si es capicua (Si es palindromo)
    bool capicua(long x){
    if (x<10)
        return true;
    else{
        long digFinal = x % 10;   // último dígito

        // obtener el primer dígito
        long copia = x;
        while (copia >= 10)
            copia /= 10;
        long digPrimero = copia;

        if (digPrimero != digFinal)  // si no coinciden
            return false;

        // quitar primer y último dígito
        long divisor = 1;
        long temp = x;
        while (temp >= 10) {   // calcular 10^(numDigitos-1) sin pow
            temp /= 10;
            divisor *= 10;
        }
        long recorte = (x % divisor) / 10;

        return capicua(recorte); // llamada recursiva
    } }

int main()
{
    cout << factorial (5) << endl;
    cout << fibo(3) << endl;
    cout << contarDigitos(1345)<< endl;
    cout << capicua(1234321)<<endl;
    return 0;
}
