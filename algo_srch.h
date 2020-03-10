/*
* algo_srch.h
* This library is a container of basic searching algorithms.
* This is the open-source software,.
*/

#define NOTFOUND -1

class BINSRCH
{
    private:
        /* @begin_index: the lowest index number.
         * @latest_index: the highest index number.
         * @middle_index: the middle index number.
         */
        int begin_index, latest_index, middle_index;

    public:
        /* @array: the input array 
         * @arr_size: the number of input array indexes
         * @numsrch: the specific number that searched
         */
        int Binarysearch(int *array, int arr_size, int numsrch);
};