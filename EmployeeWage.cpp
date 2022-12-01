#include<iostream>
using namespace std;
#include<time.h>

//UC1 : Check employee is present or absent
int main()
{
    cout<<"Welcome to employee wage computation program on master branch"<<endl;
    int isPresent = 1;
    int random;
    srand(time(0));
    random = (rand() % 2);
    if(random == isPresent)
    {
        cout<<"Employee is present";
    }
    else{
        cout<<"Employee is absent";
    }
    return 0;
}