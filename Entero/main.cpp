#include <iostream>

using namespace std;

int main()
{
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
