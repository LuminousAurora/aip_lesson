#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main() {

    srand(time(0));

    int mas[10];
    int pos = 0;
    int ngt = 0;
    int a = 0;
    int b = 0;
    float sp;
    float sn;

    for (int i = 0; i <10; i++) {
        mas[i] = rand() % 26 - 10;
        cout << mas[i] << " ";

        if (mas[i] >= 0) {
            pos = pos + mas[i];
            a++;

        }

        if (mas[i] <= 0) {
            ngt = ngt + mas[i];
            b++;
        }
    }
    sp = pos / a;
    sn = ngt / b;
    cout << endl;
    cout << " arithmetic mean of positive numbers = " << sp << endl;
    cout << " arithmetic mean of negative numbers = " << sn;

    return 0;
}
