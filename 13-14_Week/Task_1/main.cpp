#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{

    ofstream fout;
    fout.open("out.txt");

    int a[10];
    int i;

    srand(time(0));

    for (i = 0; i < 10; i++)
        a[i] = rand() % 20;
    for (i = 0; i < 10; i++) {
        cout << a[i] << " ";

        fout << a[i] << " ";

    }
    fout.close();
}
