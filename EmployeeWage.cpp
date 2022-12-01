#include<iostream>
using namespace std;
#include<time.h>

//UC3 : Add part time employee & wage
void empWage()
{
    srand(time(0));
    int random = rand() % 3;
    int fullTime = 1;
    int partTime = 2;
    int empHours;
    int Emp_Wage_PerHour = 20;
    if(random == fullTime)
    {
        cout<<"Employee is doing Full Time"<<endl;
        empHours = 8;
    }else if(random == partTime)
    {
        cout<<"Employee is doing Part Time"<<endl;
        empHours = 4;
    }
    else{
        cout<<"Employee is Absent"<<endl;
        empHours = 0;
    }
    int empWage = empHours * Emp_Wage_PerHour;
    cout<<"Employee Hours : "<<empHours<<endl;
    cout<<"Employee Wage : "<<empWage;
    
}
int main()
{
    empWage();
    return 0;
}