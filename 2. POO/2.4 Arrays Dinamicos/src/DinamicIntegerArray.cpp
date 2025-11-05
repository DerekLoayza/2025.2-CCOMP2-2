#include "DinamicIntegerArray.h"
using namespace std;

DinamicIntegerArray::DinamicIntegerArray() {
    this->size=0;
    this->data= new int[size];
}

DinamicIntegerArray::DinamicIntegerArray(int arr[], int size) {
    this->size=size;
    this->data= new int[size];
    for(int i=0; i<size; i++)
        this->data[i]=arr[i];
}

int DinamicIntegerArray::getSize() const{
    return size;
}

void DinamicIntegerArray::print() const{
    cout << "[";
    for(int i=0; i<size; i++){
        cout << this->data[i] << " ";
    }
    cout << "]";
}

void DinamicIntegerArray::pushBack(int val) {
    int *tmp = new int[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = this->data[i];
    tmp[size] = val;
    size++;
    delete[] data;
    this->data = tmp;
}

DinamicIntegerArray::~DinamicIntegerArray() {
    delete[]data;
}
