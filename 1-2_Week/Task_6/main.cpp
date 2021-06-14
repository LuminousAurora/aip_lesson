#include <iostream>
#include <fstream>
int main()
{
    std::ofstream fout;
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "         Calculator" << std::endl;;
    std::cout << "Enter what you want to calculate in the format: (a+b)   (a-b)   (a*b)   (a/b)" << std::endl;;
    std::cin >> x >> oper >> y;

    switch (oper) {
        case '+':
            std::cout << "Result is: " << x + y << std::endl;
            fout << x + y;
            break;
        case '-':
            std::cout << "Result is: " << x - y << std::endl;
            fout << x - y;
            break;
        case '*':
            std::cout << "Result is: " << x * y << std::endl;
            fout << x * y;
            break;
        case '/':
            std::cout << "Result is: " << x / y << std::endl;
            fout << x / y;
            break;
        }
    }

