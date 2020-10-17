#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort: public Sort
{
private:
    // void swapValues(int &, int &);
    int partitioning(int*, int, int);

public:
    void quickSort(int*, int, int);
};

#endif // QUICKSORT_H