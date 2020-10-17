#include <iostream>
#include "Sort.h"

void Sort::swapValues(int &leftValue, int &righValue)
{
    int temp;
    temp = leftValue;
    leftValue = righValue;
    righValue = temp;
}