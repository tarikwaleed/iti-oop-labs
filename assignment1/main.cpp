#include<iostream>
#include "employee.h"
#include "add.h"
using namespace std;


int main(int argc, char const *argv[])
{
    //Problem1

    // int size=2;
    // Employee* emps=  new Employee[size];
    // for(int i=0;i<size;i++){
    //     emps[i].InitializeEmployee();
    // }
    // cout<<"The Data of All Employees"<<endl;
    // for(int j=0;j<size;j++){
    //     emps[j].DisplayEmployee();
    // }

    //Problem2
    cout<<Add(10,20)<<endl;

    //Problem3
    cout<<Add(10.2f,20.3f)<<endl;




    return 0;
}
