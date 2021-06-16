#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main() {

    srand(time(0));

    ofstream fout;
    fout.open("out.txt");

    int mas[10];
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 20;
        cout << mas[i] << " ";

        if (mas[i] > 3) {
            sum += mas[i];
            count++;
        }
    }
    cout << " the number of elements is more than  >3 = " << count << endl;
    cout << " amount = " << sum;

    fout << sum << " ";
    fout.close();

    return 0;
}
