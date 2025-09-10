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
    cout << "Indica un numero para ver si es primo: " << endl;
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
    cout << "Dame un numero para hallar los primos menores que este: " << endl;
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
    cout << endl <<"Dame un numero de 3 a 9 digitos: \n";
    cin >> a;
    int original = a;
    while (a>0){
        int digito =a%10; //Digito seria el ultimo digito de a (se reinicia cada vez que llega al while)
        a_invertida=a_invertida*10 + digito; //Esto invertiria el numero, si el numero era 1234, esto seria 4*40+3, sea 43, lo invierte
        a=a/10; } // Luego se le quita el ultimo dijito (hasta que a sea 0 y rompa el bucle)
    if (original == a_invertida){
        cout << original  << " Es palindromo\n"; }
    else {
        cout << original << " No es palindromo\n";
    }

    /*Bucle FOR
    for (inicia una variable {si ya esta iniciada lo dejas en blanco} ; condicion ; incrementacion)
        instruccion 1
        instruccion 2 */
//Dame por teclado una division y dame la parte entera y los primeros 10 digitos de la division
    int dividendo=0, divisor=0;
    cout << "Dame un dividendo y un divisor: ";
    cin >> dividendo >> divisor;
    cout << "La parte entera de la division es: " << dividendo/divisor << endl;
    cout << "La parte decimal de la division es: ";
    int residuo=dividendo % divisor; //Se guardan los residuos en decimales pero no se muestra porque estan en un int
    for (q=0 ; q<10 ; q++){
        residuo=residuo*10; //Al residuo lo multiplica x 10, si no se multiplica no podremos hallar el cociente
        int cociente_decimal=residuo/divisor;//Aca lo divide entre el divisor para hallar el primer dijito
        cout << cociente_decimal;
        residuo=residuo%divisor;//Para hallar el siguiente digito, este debe ser el sobrante de la division actual, por eso se actualiza
    }

    double resultado = static_cast<double>(dividendo) / divisor;
    cout << endl <<"La division correcta de la division es: " << resultado << endl;

    return 0;
}
