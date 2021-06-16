#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main() {

    srand(time(0));

    int mas[8];
    int pos = 0;
    int ngt = 0;

    for (int i = 0; i < 8; i++) {
        mas[i] = rand() % 26 - 10;
        cout << mas[i] << " ";

        if (mas[i] >= 0) {
            pos++;
        }

        if (mas[i] <= 0) {
            ngt++;
        }
    }
    cout << endl;
    cout << " Positive numbers = " << pos << endl;
    cout << " negative numbers = " << ngt;

    return 0;
}
