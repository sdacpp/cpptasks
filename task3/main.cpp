/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "StringConverter.hpp"

int main()
{
    std::string camelString = StringConverter::toCamelCase("my very nOt caMel case String");
    std::cout << camelString << std::endl;
    std::string snakeString = StringConverter::toSnakeCase("my very nOt caMel case String");
    std::cout << snakeString << std::endl;
    return 0;
}
