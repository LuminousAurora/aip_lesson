#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

float a, b, a1, b1;

struct Compi {
    float re;
    float im;
};

Compi number1;
Compi number2;
void Compa();

int main() {

    cout << "Enter the real part of the number ";
    cin >> number1.re;
    cout << "Enter the imaginary part of the number ";
    cin >> number1.im;
    cout << "z=" << number1.re << "+" << "i*" << number1.im << " - Algebraic form" << endl;

    cout << "Enter the real part of the number ";
    cin >> number2.re;
    cout << "Enter the imaginary part of the number ";
    cin >> number2.im;
    cout << "z=" << number2.re << "+" << "i*" << number2.im << " - Algebraic form" << endl;
    Compa();

    return 0;
}
void Compa() {
    if (number1.re > number2.re)
        cout << "The real part of the first number is greater than the second";
    else
        cout << "The real part of the second number is greater than the first";

}
