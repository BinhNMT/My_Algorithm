#include <iostream>
#include "BubbleSort.h"

void BubbleSort::compareAndSort(int *arrayPtr, int sizeToSort)
{
    for (int j = 0; j < (sizeToSort); j++)
    {
        if (arrayPtr[j] > arrayPtr[j + 1])
        {
            swapValues(arrayPtr[j], arrayPtr[j + 1]);
        }
    }
}

void BubbleSort::bubbleSort(int *arrayPtr, int arraySize)
{
    for (int i = (arraySize - 1); i >= 0; i--)
    {
        compareAndSort(arrayPtr, i);
    }
}