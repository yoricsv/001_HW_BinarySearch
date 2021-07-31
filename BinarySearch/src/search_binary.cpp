#include "search_binary.h"

void search_Binary( const  int* const & array, const int & size)
{
    int begin     = 0,
        middle,
        forecast,
        end       = size;
    int counter   = 0;

    while (begin < end)
    {
        int search_value = array[0];
            middle       = (begin + end) / 2;
            forecast     = array[middle];

        if (search_value < forecast)
        {
            search_value = forecast;
            begin = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
        counter++;
    }
    std::cout << "Max value is - " << array[middle] << std::endl;
    std::cout << "Value found in " << counter << " iterations." << std::endl;
}

void search_Binary(vector <int>       & array, const int   size)
{
    int begin = 0;
    int middle;
    int forecast;
    int end = size;
    int counter = 0;

    while (begin < end)
    {
        int search_value = array[0];
            middle       = (begin + end) / 2;
            forecast     = array[middle];

        if (search_value < forecast)
        {
            search_value = forecast;
            begin = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
        counter++;
    }
    std::cout << "Max value is - " << array[middle] << std::endl;
    std::cout << "Value found in " << counter << " iterations." << std::endl;
}