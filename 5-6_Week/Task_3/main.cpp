#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#define e 2.71828182846

int main() {

    std::ifstream fin;
    fin.open("in.txt");

    float x;
    float y;

    fin >> x;
    fin >> y;
    fin.close();

    bool area1 = (y > x * x) && (y = -x);
    if ((y=x*x) && (y< exp(-x)) &&(y<exp(x)))
        std::cout << "yes";
    else
        std::cout << "no";

}
