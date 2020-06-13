#include "casting.h"
#include<iostream>
using std::cout;

int main()
{
    cout<<convert_double_to_int(7.5);
    cout<<convert_int_to_double(8, 2.7);
    cout<<static_cast_double_int(5.86);


    return 0;
}