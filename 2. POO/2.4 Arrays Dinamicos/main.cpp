#include <iostream>
#include "DinamicIntegerArray.h"
using namespace std;

int main() {

    DinamicIntegerArray p1;
    cout << p1.getSize() << endl;
    p1.print();
    cout << endl;

    int arr[]={1,53,64,16,43,73};
    DinamicIntegerArray p2(arr,6);
    cout << p2.getSize() << endl;
    p2.print();
    cout << endl;

    p2.pushBack(10);
    p2.print();
    cout << endl;

return 0; }
