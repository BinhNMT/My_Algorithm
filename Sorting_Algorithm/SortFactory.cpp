#include <iostream>
#include "SortFactory.h"

Sort *SortFactory::Pattern(std::string patternType)
{
    Sort *prt_Pattern;
    pattern = patternType;

    if (pattern == "QuickSort")
    {
        prt_Pattern = new QuickSort();
    }
    
    else if (pattern == "BubbleSort")
    {
        prt_Pattern = new BubbleSort();
    }
    
    return prt_Pattern;
}

void SortPattern::goSort(int *arrayPtr, int arraySize)
{
    // TODO
}