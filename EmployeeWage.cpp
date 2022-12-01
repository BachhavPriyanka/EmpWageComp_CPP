#include<iostream>
using namespace std;
#include<time.h>

//UC4 : Solved using switch case

void empWage(){        
	int empHrs = 0, empWagePerDay = 0;
    int WORKING_DAYS_PER_MONTH  = 20;
    int EMP_WAGE_PER_HOUR = 20;
    int empWagePerMonth = 0;

    for(int day = 0 ; day <= WORKING_DAYS_PER_MONTH ; day++) {
    srand(time(0));
    int random = rand() % 3;
	switch(random) {
	    case 1:
	        cout<<"Employee is Doing Full Time:"<<endl;
	        empHrs = 8;
	            break;
	    case 2:
	        cout<<"Employee is Doing Part Time:"<<endl;
	        empHrs = 4;
	            break;
	    default:
	        cout<<"Employee is Absent:"<<endl;
	        empHrs = 0;
	            break;
	    }
	    empWagePerDay = empHrs * EMP_WAGE_PER_HOUR;
        empWagePerMonth = empWagePerDay + empWagePerMonth;
	    cout<<"Emp Hours : "<<empHrs<<endl;
	    cout<<"Emp Wage : "<<empWagePerDay<<endl;
        cout<<"*********************************"<<endl;
    }
	cout<<"Employee wage per month : "<<empWagePerMonth;
}

int main()
{
    cout<<"Welcome to Employee Wage Computation"<<endl;
    cout<<" Using switch case "<<endl;
    empWage();

}