#ifndef DINAMICINTEGERARRAY_H
#define DINAMICINTEGERARRAY_H
#include <iostream>

class DinamicIntegerArray
{
    public:
        DinamicIntegerArray();
        DinamicIntegerArray(int arr[], int size);

        int getSize() const;
        void print() const;

        void pushBack(int val);

        ~DinamicIntegerArray();

    private:
        int *data;
        int size;
};

#endif // DINAMICINTEGERARRAY_H
