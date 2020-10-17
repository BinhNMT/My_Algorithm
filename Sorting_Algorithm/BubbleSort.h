#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"

class BubbleSort: public Sort
{
private:
    void compareAndSort(int*, int);

public:
    void bubbleSort(int*, int);
};

#endif // BUBBLESORT_H