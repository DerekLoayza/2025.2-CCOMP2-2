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
   int invertir(int n, int invertido = 0) {
    if (n == 0) {
        return invertido;  // caso base
    } else {
        return invertir(n / 10, invertido * 10 + (n % 10));
    }
    }

    bool palindromo(int n) {
        if (n == invertir(n)) {   // caso base: si es igual al invertido
            return true;
        } else {                  // si no lo es
            return false;
        }
    }


int main()
{
    cout << factorial (5) << endl;
    cout << fibo(3) << endl;
    cout << contarDigitos(1345)<< endl;
    cout << palindromo(12415) << endl;   // imprime 0 (no es palíndromo)
    cout << palindromo(12321) << endl;   // imprime 1 (sí es palíndromo)
    return 0;
}
