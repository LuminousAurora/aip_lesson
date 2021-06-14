#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

int main() {
    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float x;
    float y;
    std::cout << std::endl;
    fin >> x;

    if (x > 7)
        y = 2 * x * x -3;
    if (x == 7)
        y = 0;
    if (x < 7)
        y = 2 * abs(x) +3;

    std::cout << y << std::endl;

    fout << y;
    fout.close();
    fin.close();

    return 0;

}
