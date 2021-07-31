#include "sort_by_bubble.h"

void sort_Bubble(        int* & array, const int &size)
{
    // BUBBLE SORT ALGORITHM BEGIN //
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            int tmp = 0;
            if (array[j] > array[j + 1])
            {
                //std::swap(array[j], array[j+1]);
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
    // BUBBLE SORT ALGORITHM END //
    outArr(array, size);
}

void sort_Bubble(vector <int> & array, const int  size)
{
    // BUBBLE SORT ALGORITHM BEGIN //
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            //int tmp = 0;
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j+1]); //tmp = array[j]; array[j] = array[j + 1]; array[j + 1] = tmp;
            }
        }
    }
    // BUBBLE SORT ALGORITHM END //

    // OUTPUT OF SORTED ARRAY //
    outArr(array, size);
}