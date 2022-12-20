#include<iostream>
using namespace std;
class Fraction {
private:
  int numerator;
  int denominator;

public:
  // Constructors
  Fraction(int numerator, int denominator) {
    SetNumerator(numerator);
    SetDenominator(denominator);
  }
  // Getters and Setters
  int GetNumerator() {
    return numerator;
  }
  void SetNumerator(int numerator) {
    this->numerator = numerator;
  }
  int GetDemominator() {
    return denominator;
  }

  void SetDenominator(int denominator) {
    this->denominator = denominator;
  }
  // Methods
  void Display(){
    std::cout << "Thre Fraction is " << numerator <<"/"<<denominator<<endl;
  }
  Fraction AddTo(Fraction other){
   int newDenominator=denominator*other.denominator;
   int newNumerator=numerator*other.denominator+denominator*other.numerator;
   return Fraction(newNumerator,newDenominator);
  }
};
