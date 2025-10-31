#include <iostream>
#include "IntegerArray.h"
using namespace std;



int main()
{
    IntegerArray ia(5);
    ia.setData(10,0);
    ia.setData(20,1);
    ia.setData(30,2);
    ia.setData(40,3);
    ia.setData(50,4);
    ia.setData(60,5);
    ia.print();
    return 0;
}
