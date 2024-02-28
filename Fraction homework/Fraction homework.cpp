#include <iostream>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    // Конструкторы
    Fraction() : numerator(0), denominator(1) {} 

    Fraction(int num, int denom) : numerator(num), denominator(denom) {} 

    // Методы
    void input() {
        cout << "Numerator: ";
        cin >> numerator;
        cout << "Denominator: ";
        cin >> denominator;
    }

    Fraction add(const Fraction& other)  {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction subtract(const Fraction& other)  {
        int newNumerator = numerator * other.denominator - other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction multiply(const Fraction& other)  {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction divide(const Fraction& other)  {
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Fraction(newNumerator, newDenominator);
    }

    void print()  {
       cout << numerator << "/" << denominator;
    }
};

int main() {
    Fraction frac1, frac2, result;

    cout << "first number\n";
    frac1.input();
    cout << "second number\n";
    frac2.input();

    cout << "first number: ";
    frac1.print();
    cout << endl;

    cout << "second number: ";
    frac2.print();
    cout << endl;

    result = frac1.add(frac2);
    cout << "Summa: ";
    result.print();
    cout << endl;

    result = frac1.subtract(frac2);
    cout << "Substract: ";
    result.print();
    cout << endl;

    result = frac1.multiply(frac2);
    cout << "Multiplication: ";
    result.print();
    cout << endl;

    result = frac1.divide(frac2);
    cout << "Digital: ";
    result.print();
    cout << endl;

    return 0;
}
