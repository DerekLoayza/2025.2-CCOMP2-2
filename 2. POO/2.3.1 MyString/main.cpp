#include <iostream>
#include "MyString.h"
using namespace std;


int main()
{
    MyString prueba("CIENCIA");
    cout << prueba.getSize()<<endl;
    cout << prueba.getData()<<endl;
    prueba.toLower();
    cout << prueba.getData()<< endl;

    return 0;}
