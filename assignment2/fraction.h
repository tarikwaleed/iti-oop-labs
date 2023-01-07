#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
class Fraction {
private:
  int numerator;
  int denominator;
  int *values;

public:
  // Constructors
  Fraction(int numerator, int denominator) {
    SetNumerator(numerator);
    SetDenominator(denominator);
    values = new int[10];
    for (int i = 0; i < 10; i++) {
      this->values[i] = i * 10;
    }
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
  void Display() {
    std::cout << "The Fraction is " << numerator << "/" << denominator << std::endl;
    std::cout << "And its values are: " << std::endl;
    for (int i = 0; i < 10; i++) {
      std::cout << "Value " << i << ":" << this->values[i] << std::endl;
    }
  }
  Fraction AddTo(Fraction other) {
    int newDenominator = denominator * other.denominator;
    int newNumerator = numerator * other.denominator + denominator * other.numerator;
    return Fraction(newNumerator, newDenominator);
  }
  Fraction operator+(Fraction other) {
    int newDenominator = this->denominator * other.denominator;
    int newNumerator = this->numerator * other.denominator + this->denominator * other.numerator;
    return Fraction(newNumerator, newDenominator);
  }
  Fraction operator-(Fraction other) {
    int newDenominator = this->denominator * other.denominator;
    int newNumerator = this->numerator * other.denominator - this->denominator * other.numerator;
    return Fraction(newNumerator, newDenominator);
  }
  Fraction operator=(Fraction f) {
    this->numerator = f.numerator;
    this->denominator = f.denominator;

    this->values = new int[10];

    for (int index = 0; index < 10; index++) {
      this->values[index] = f.values[index];
    }
    return *this;
  }
  /*
  to be able to do f2=f2+5;
  */
  Fraction operator+(int n) {
    int newNumerator = this->numerator + n;
    int newDenomirator = this->denominator;
    return Fraction(newNumerator, newDenomirator);
  }
  int &operator[](int index) {
    if (index > 9) {
      std::cout << "Index out of range" << std::endl;
      exit(0);
    }
    return values[index];
  }

  /*
  to be able to do f2=5+f2;
  first argument is what's left of the operand
  second argument is what's right of the operand
  */
  friend Fraction operator+(int x, Fraction f);
  friend std::ostream &operator<<(std::ostream &stream, const Fraction &fraction);
};
Fraction operator+(int x, Fraction f) {
  int newNumerator = f.numerator + x;
  int newDenomirator = f.denominator;
  return Fraction(newNumerator, newDenomirator);
}
std::ostream &operator<<(std::ostream &stream, const Fraction &fraction) {
  stream << "The Fraction is:" << fraction.numerator << "/" << fraction.denominator;
  std::cout << "And its values are: " << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << "Value " << i << ":" << fraction.values[i] << std::endl;
  }
  return stream;
}

#endif // !FRACTION_H