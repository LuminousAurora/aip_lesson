#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

struct Point {
    float x, y;
};

Point p;

void Condition();

int main() {

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    std::cout << "Ender x y:" << std::endl;
    std::cin >> p.x >> p.y;

    fin >> p.x;
    fin >> p.y;
    fin.close();

    Condition();

    fout.close();

    return 0;
}

void Condition() {
    if ((sqrt(p.x * p.x + p.y * p.y) < 1) && (p.x > 0 || (p.x < 0) && (p.y = -p.x)))
        std::cout << "The point gets hit" << std::endl;
    else
        std::cout << "The point does not fall" << std::endl;
}
