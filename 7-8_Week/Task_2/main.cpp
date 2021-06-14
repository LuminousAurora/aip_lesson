#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float sh, x1, x, y;
    cout << "Enter the step: ";
    cin >> sh;
    cout << "Enter the beginning of the range: ";
    cin >> x;
    cout << "Enter the end of the range: ";
    cin >> x1;
    cout << "\t x \t \t y" << endl;
    cout.precision(5);
    while (x <= x1) {
        y = sqrt((1 + 3 * x) / -2) + 3 * x;
        cout << "\t" << x << "\t\t" << y << endl;
        x += sh;
    }
    return 0;
}
