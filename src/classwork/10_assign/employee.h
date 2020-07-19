#include <iostream>

class Employee
{
    public:
        virtual double get_pay();
};

class Engineer : public Employee
{
    public:
        double get_pay();
    private:
        double bpay;
        double bspay;
};

class SalesEmployee : public Employee
{
    public:
        double get_pay();
    private:
        double h;
        double r;
        double c;
};