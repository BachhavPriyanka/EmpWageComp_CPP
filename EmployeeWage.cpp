#include<iostream>
using namespace std;
#include<time.h>

//UC2 : Calculate daily employee wage
void empWage()
{
    int isPresent = 1;
    int random;
    int Emp_Wage_PerHour = 20;
    int empHours;
    srand(time(0));
    random = (rand()%2);
    if(random == isPresent)
    {
        cout<<"Employee is present"<<endl;
        empHours = 8;
    }
    else{
        cout<<"Employee is absent"<<endl;
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