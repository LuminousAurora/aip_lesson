#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main() {

    srand(time(0));

    int mas[10];
    int sum = 0;
    float arme;


    for (int i = 0; i < 10; i++) {
        mas[i] = rand() % 26 - 10;
        std::cout << mas[i] << " ";
        sum = sum + mas[i];
    }
    arme = sum / 10.0;
    std::cout<< endl;
    std::cout<< " arithmetic mean  = " << arme << endl;


    return 0;
}
