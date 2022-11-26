#include<iostream>
#include "employee.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int size=2;
    Employee* emps=  new Employee[size];
    for(int i=0;i<size;i++){
        emps[i].InitializeEmployee();
    }
    cout<<"The Data of All Employees"<<endl;
    for(int j=0;j<size;j++){
        emps[j].DisplayEmployee();
    }


    return 0;
}
