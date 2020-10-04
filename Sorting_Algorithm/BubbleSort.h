#ifndef BUBBLESORT_H
#define BUBBLESORT_H

class BubbleSort
{
private:
    void swapValues(int &, int &);
    void compareAndSort(int*, int);

public:
    void bubbleSort(int*, int);
};

#endif // BUBBLESORT_H