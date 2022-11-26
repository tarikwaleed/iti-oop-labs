#include<iostream>
using namespace std;
struct Employee{
    int id;
    char name[20];
    int salary;
    
    void InitializeEmployee(){
        cout<<"Enter Employee ID:"<<endl;
        cin>>id;
        cout<<"Enter Employee Name:"<<endl;
        cin>>name;
        cout<<"Enter Employee salary:"<<endl;
        cin>>salary;
    }
    void DisplayEmployee(){
        cout<<"Data of Employee:"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }


};