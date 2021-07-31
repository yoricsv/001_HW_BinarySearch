#pragma once
#ifndef MENU_H
#define MENU_H

#include <iostream>

enum PROGRAM_STATE
{
    CHOSE_DYNAMIC_STRUCT,
    USE_DYNAMIC_ARRAY,
    USE_VECTOR,
};
static int exit = 0;

void actions_list();
void warning_list();

#endif // MENU_H
