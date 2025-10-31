#include "MyString.h"

MyString::MyString(char *arr, int size)
{
    this ->size = size;
    this ->data = arr;
}

MyString::~MyString()
{
    //dtor
}
