#include <iostream>
using namespace std;
    /*Cuando una funcion se llama a si misma
    n!=n*(n-1)!
    5!=4*3!   3*2!   2*1! */

//Crea una funcion que retorne el factorial de un numero
    long long factorial (long n){
    if(n==1){ //Caso base
        return 1; }
    else {
        return n*factorial(n-1); }
    }

//Crea una funcion que retorne el fibonacci de un numero
    long long fibo(long x){
    if (x==1 || x==0){
        return 1;}
    else{
        return fibo(x-1)+fibo(x-2); }
    }

//Escribe una funcion que retorne cuandos numeros tiene un numero
    long long contarDigitos(long a){
    if (a<10){
       return 1; }
    else{
       return 1 + contarDigitos(a/10); }
    }
//Da un numero y verifica si es capicua (Si es palindromo)             //RESOLVERLO
    long long capicua(long d){
    if (d<=1){
        return true;}
    else{
        while(d>0){
            int digito=d%10;
            int dInvertido = d;
            dInvertido=dInvertido*10+digito;
            d=d/10;
        if (d==dInvertido)
            return true;
        else
            return false;
        }
        }
    }

int main()
{
    cout << factorial (5) << endl;
    cout << fibo(3) << endl;
    cout << contarDigitos(1345)<< endl;
    cout << capicua(1234321)<<endl;
    return 0;
}
