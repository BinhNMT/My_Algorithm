#ifndef SORTFACTORY_H
#define SORTFACTORY_H

#include <string>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

class SortFactory
{
private:
    std::string pattern;
public:
    Sort *Pattern(std::string);
    void goSort(int*, int);
};


#endif //SORTFACTORY_H