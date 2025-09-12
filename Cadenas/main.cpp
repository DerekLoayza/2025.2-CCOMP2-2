#include <iostream>

using namespace std;

int main()
{
    //Caracter final de una cadena -> '\0'
    string cad = "Ciencia de la computacion"; //El espacio en blanco cuenta como caracter
    cout << cad.at(5)<< endl; //Esta mostrando la posicion 5, recuerda que empieza por 0 1 2 ...

    int i=0;
    while (cad.at(i) != '\0'){
        i++;
    }
    cout << i << endl; //Esto esta mal
    return 0;
}
