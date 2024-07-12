#include <iostream>
using namespace std;

// Реализуйте класс Дробь. Необходимо хранить числитель и знаменатель в качестве полей класса. Реализуйте методы для ввода данных , для выполнения арифметических операций (сложение, вычитание, умножение, деление, и т.д.) и для вывода данных.

class Fraction
{
public:
    int numerator;
    int denominator;

    void Input()
    {
        cout << "Enter numerator: " << endl;
        cin >> numerator;
        cout << "Enter denominator: " << endl;
        cin >> denominator;
    }
    
    void Sum(int x)
    {
        numerator += (x * denominator);
        cout << " Result of Addition is " << numerator << "/" << denominator << endl;
    }
    
    void Sub(int x)
    {
        numerator -= (x * denominator);
        cout << " Result of Subtraction is " << numerator << "/" << denominator << endl;
    }
    
    void Mult(int x)
    {
        numerator *= x;
        cout << " Result of Multiplication is " << numerator << "/" << denominator << endl;
    }
    
    void Div(int x)
    {
        denominator *= x;
        cout << " Result of Division is " << numerator << "/" << denominator << endl;
    }

};

int main()
{
    Fraction a;
    a.Input();
    a.Sum(1);
    a.Sub(2);
    a.Mult(3);
    a.Div(4);
}


