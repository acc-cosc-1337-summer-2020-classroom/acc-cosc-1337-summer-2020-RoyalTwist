#include "employee.h"


double Engineer::get_pay()
{
    return bpay + bspay;
}

double SalesEmployee::get_pay()
{
    return (h * r) + c;
}
