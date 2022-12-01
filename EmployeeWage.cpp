#include<iostream>
using namespace std;
#include<time.h>

//UC4 : Solved using switch case

void empWageCal(int* empHrs, int* EMP_WAGE_PER_HOUR){
		int empWage;
	    empWage = ((*empHrs) * (*EMP_WAGE_PER_HOUR));
	    cout<<"Emp Hours : "<<*empHrs<<endl;
	    cout<<"Emp Wage : "<<empWage<<endl;
}
void empWage(){        
	int empHrs, empWage;
    srand(time(0));
    int random = rand() % 3;
	int EMP_WAGE_PER_HOUR = 20;
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
	empWageCal(&empHrs, &EMP_WAGE_PER_HOUR);
}

int main()
{
    cout<<"Welcome to Employee Wage Computation"<<endl;
    cout<<" Using switch case "<<endl;
    empWage();

}