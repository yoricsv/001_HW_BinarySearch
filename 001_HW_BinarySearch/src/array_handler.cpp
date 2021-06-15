#include "array_handler.h"

void fillArr         (        int* const   array, const int   size)
{
    srand(time_t(0));
    // PSEUDORANDOM GENERATOR //
    for (int i = 0; i < size; i++)
    {
        array[i] = (signed int) rand() / (10 + i);
    }
}
void fillArr         (vector <int>       & array, const int   size)
{
    srand((unsigned)time_t(0));
    // PSEUDORANDOM GENERATOR //
    for (int i = 0; i < size; i++)
    {
        array[i] = (int)rand() / RAND_MAX;
    }
}

void outArr         ( const  int* const   array, const int   size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Element [" << i << "] = " << array[i] << "\t";
        std::cout << array + i                                       << std::endl;
    }
}
void outArr         (vector <int>       & array, const int   size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Element [" << i << "] = " << array[i] << "\t";
    }
}

void rightShift (        int*       & array,       int & arr_size)
{
    int shift_value = rand() % (arr_size - 1);
    int tmp = 0;

    for (int i = 0; i < shift_value; i++)
    {
        tmp = array[arr_size - 1];
        for (int j = arr_size - 1; j > 0; j--)
        {
            array[j] = array[j - 1];
        }
        array[0] = tmp;

    }
    std::cout << std::endl;
    outArr(array, arr_size);
}

void rightShift (vector <int>       & array, const int   arr_size)
{
    int shift_value = rand() / RAND_MAX + 7;
    int tmp         = array[arr_size - 1];

    for (int i = 0; i < shift_value; i++)
    {
        for (int j = arr_size - 1; j > 0; j--)
        {
            array[j] = array[j - 1];
        }
        array[0] = tmp;

    }
    std::cout << std::endl;
    outArr(array, arr_size);
}