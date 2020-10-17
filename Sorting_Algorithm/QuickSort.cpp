#include <iostream>
#include "QuickSort.h"

int QuickSort::partitioning(int array[], int low, int high)
{
    int left = low;
    int right = high - 1;
    int pivot = high;

    while (left <= right)
    {
        if (array[left] > array[pivot])
        {
            swapValues(array[left], array[pivot]);
        }
        
        left++;
    }
    
    return right;
}

void QuickSort::quickSort(int array[], int low, int high)
{
    int right = partitioning(array, low, high);

    if (right <= 0)
    {
        return;
    }

    quickSort(array, low, right);
}