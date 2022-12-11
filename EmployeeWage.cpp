#include<iostream>
using namespace std;
#include<time.h>

/*UC7 :Refactor the Code to write a Class Method to Compute Employee Wage - Use Class Method
and Class Variables*/
class Emp{
    private:
        int empHrs = 0, empWagePerDay = 0, totalWorkingDays = 0, totalEmpHours = 0, empWagePerMonth = 0;
        int WORKING_DAYS_PER_MONTH  = 20;
        int EMP_WAGE_PER_HOUR = 20;
        int EMP_TOTAL_WORKING_HOUR = 100;
    public:        
        void empWage();
};

void Emp :: empWage(){ 
    while(totalEmpHours <= EMP_TOTAL_WORKING_HOUR && totalWorkingDays <= WORKING_DAYS_PER_MONTH) {
    srand(time(0));
    int random = rand() % 3;

    totalWorkingDays = totalWorkingDays + 1;

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
        totalEmpHours = empHrs + totalEmpHours;
	    empWagePerDay = empHrs * EMP_WAGE_PER_HOUR;
        empWagePerMonth = empWagePerDay + empWagePerMonth;
	    cout<<"Emp Wage : "<<empWagePerDay<<endl;
        cout<<"*********************************"<<endl;
    }
	cout<<"Employee wage per month : "<<empWagePerMonth;
}

int main()
{
    Emp emp;
    cout<<"Welcome to Employee Wage Computation"<<endl;
    emp.empWage();


}