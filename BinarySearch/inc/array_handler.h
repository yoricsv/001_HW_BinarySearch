#pragma once
#ifndef ARRAY_HANDLER_H
#define ARRAY_HANDLER_H

#include <iostream>
#include <random>
#include <time.h>
#include <vector>

void fillArr    (        int* const   array, const int   size);
void fillArr    (vector <int>       & array, const int   size);

void outArr     ( const  int* const   array, const int   size);
void outArr     (vector <int>       & array, const int   size);

void rightShift (        int*       & array,       int & arr_size);
void rightShift (vector <int>       & array, const int   arr_size);

#endif // ARRAY_HANDLER_H