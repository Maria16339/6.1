// Source.cpp
#include <iostream>
#include "Array.h"
#include <time.h>
Array returnDynamicArray(int arr[], const int size);
int main()
{
    srand((unsigned)time(NULL));
    const int size = 49;
    int arr[size];

    for (int i = 0; i < size; i++)
        arr[i] = -50 + rand() % int(50 - (-50) + 1);
    Array taskArray = returnDynamicArray(arr, size);
    taskArray.Print();
    cout << endl;
    cout << "Min = " << taskArray.Min() << endl;
    cout << "Sum = " << taskArray.Sum() << endl;
    cout << "arithmetic = " << taskArray.arithmetic() << endl;
    cout << endl;
    taskArray.Mul();
    taskArray.Print();
    cout << endl;
    return 0;
}
Array returnDynamicArray(int arr[], const int size)
{
    Array dynamicArray = Array(size);
    for (int i = 0; i < size; i++)
        dynamicArray[i] = arr[i];
    return dynamicArray;
}