#include "menu.h"

void actions_list()
{
    std::cout << "Please, decide on the type of the array:"     << std::endl;
    std::cout << "\t1: use a Regular array,"                    << std::endl;
    std::cout << "\t2: use a Vector,"                           << std::endl;
    std::cout << "\t0: exit"                                    << std::endl;
    std::cout << "What will you choose?"                        << std::endl;
}
void warning_list()
{
    std::cout << "\n\a\t!!! AN ERROR !!!\n"                     << std::endl;
    std::cout << "\tYou made a mistake while entering number!"  << std::endl;
    std::cout << "\tPlease try again."                          << std::endl;
}