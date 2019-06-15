#include<iostream>
using namespace std;
struct Employee
{
    int id;
    int working_hours;
    int sal_per_hour;
    int total_salary();
};
int total_salary(int a, int b)
{
    cout<<"The total salary is per day = "<< a*b;
}
int main()
{
    struct Employee e1;
    e1.id = 101;
    e1.working_hours = 8;
    e1.sal_per_hour = 200;
    total_salary(e1.working_hours, e1.sal_per_hour);
}