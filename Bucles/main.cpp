#include <iostream>
using namespace std;
int main()
{
/* Bucle WHILE
        while(Condicion) {
            instruccion 1
            instruccion 2

            incrementacion }
    break: Rompe el bucle
    continue: Salta a la siguiente iteracion. Si llega a un if, que continue y no se detenga
         */

//Programa que indique los numeros de 1 al 9
    int q=1;
    while (q<10){//Si quieres que tambien imprima el 10 pones <=
        cout << q << endl;
        q=q+1; }
    q=9;
    while (q>=1){
        cout << q << endl;
        q=q-1;
        }

/*Multiplos de 3 menores a 100
    int x=1;
    while (x<=100){
        if (x%3==0){
            cout << x << " " << endl;}
        x=x+1;//O tambien puedes poner x++;
        }                                             */

//Solicita un numero por teclado e indica si es primo
    long long num, u = 1 , div=0; //Puso el long long para numeros mas grandes
    cout << "Indica un numero: " << endl;
    cin >> num;
    while (u<=num){ //Usa i como variable auxiliar
        if (num%u==0){ //Un primo es divisible entre el mismo y el 1, si su residuo entre esos 2 numeros es 0 es primo
            div++;  //Cada vez que sea divisible (o sea por 2 numeros) se le suma, porque todo primo tiene 2 divisores
            }
        u++;//Aca incrementa el valor de j para seguir con el while y dividir del 1 hasta el numero que puso
    }
    cout << ( (div == 2) ? "Primo" : "No primo") << endl; //Aca verifica si el Num tiene 2 o mas divisores, si solo tiene 2 es primo

//Pide un programa que pida un numero e imprima los numeros primos menores que este
    long long n, j=2,d=0, i=2;
    cout << "Dame un numero: " << endl;
    cin >> n;
    while (j<=n){
        if (j==2){
            cout << "2 ";
            j++;
            continue;
        }
        while (i*i <=j){
            if (j%i==0){
                d++;
                break;
            }
            i++;
        }
        if (d==0){
            cout << j << " ";}
        d=0; i=2;
        j++;
    }
//Escribe un programa que pida un numero (3 a 9 digitos) y evalua si el numero es un palindromo
    int a, a_invertida=0;
    cout << "Dame un numero de 3 a 9 digitos\n";
    cin >> a;
    int original = a;
    while (a>0){
        int digito =a%10;
        a_invertida=a_invertida*10 + digito;
        a=a/10; }
    if (original == a_invertida){
        cout << original  << " Es palindromo\n"; }
    else {
        cout << original << " No es palindromo\n";                     //PORQUE ME SALE UN 0 ACA, ADEMAS HACERLO ACA CON FOR Y WL PRIMO TAMBIEN
    }
/*Bucle FOR
    for (inicia una variable {si ya esta iniciada lo dejas en blanco} ; condicion ; incrementacion)
        instruccion 1
        instruccion 2 */

    return 0;
}
