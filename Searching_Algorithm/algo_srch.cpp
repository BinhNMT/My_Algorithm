/*
* algo_srch.cpp
* This library is a container of basic searching algorithms.
* This is the open-source software,.
*/

#include <iostream>
using namespace std;

#include "algo_srch.h"


int BINSRCH::Binarysearch(int *array, int arr_size, int numsrch)
{
    begin_index = 0;
    latest_index = arr_size - 1;

    while(true)
    {
        if(begin_index > latest_index)
        {
            return NOTFOUND;
        }
        
        /* initial middle index number */
        middle_index = begin_index + (latest_index - begin_index)/2;

        if(array[middle_index] == numsrch) 
        {
            return middle_index;
        }

        /* search to the right */
        else if(array[middle_index] > numsrch)
        {
            latest_index = middle_index -1;
        }
        
        /* search to the left */
        else if(array[middle_index] < numsrch)
        {
            begin_index = middle_index + 1;
        }
    }
}