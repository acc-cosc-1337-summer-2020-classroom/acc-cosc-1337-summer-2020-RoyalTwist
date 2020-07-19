#include "employee.h"
using std::cout, std::endl;

int main()
{
    Engineer eg;
    Employee *Engy = &eg;
    cout<<Engy->get_pay()<<endl;
    delete Engy;

    return 0;
}