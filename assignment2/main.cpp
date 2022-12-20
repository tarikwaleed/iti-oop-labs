#include<iostream>
#include "fraction.cpp"
using namespace std;
int main(int argc, char const *argv[])
{
    Fraction f1=Fraction(1,4);
    Fraction f2=Fraction(3,4);
    f1.Display();
    f2.Display();
    Fraction f3=f1.AddTo(f2);
    f3.Display();
    Fraction f4=f2.AddTo(f1);
    f4.Display();


    


    return 0;
}
