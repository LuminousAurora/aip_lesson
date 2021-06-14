#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    float a, b, x, y;

    std::ifstream fin;
    std::ofstream fout;

    fout.open("out.txt");
    fin.open("in.txt");
    fin >> a;
    fin >> b;
    fin >> x;


    y = sqrt(x * x + b) - (b * b * sin(x + a) * sin(x + a) * sin(x + a)) / x;
    std::cout << y << std::endl;

    fout << y;
    fout.close();
    fin.close();
}
