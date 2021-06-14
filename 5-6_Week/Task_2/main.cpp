
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

int main() {

    std::ifstream fin;
    fin.open("in.txt");

    float r = 1;
    float x;
    float y;

    fin >> x;
    fin >> y;
    fin.close();
    float l = sqrt(x * x + y * y);

    bool area1 = (x < 0) && (y = -x);
    if ((l < r) && (x > 0 || area1))
        std::cout << "yes";
    else
        std::cout << "no";

}
