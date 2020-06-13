#include "overflow.h"

/*
Function int_overflow creates an int num variable with value 2147483647, 
add 1 to it, and returns it

@param none
@return num + 1
*/

int int_overflow()
{
    int num = 214783647;
    num += 1;

    return num;
}