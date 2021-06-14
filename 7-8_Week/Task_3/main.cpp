#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y, sh;
    cout << "Enter the step: " << endl;
    cin >> sh;
    cout << "Enter the beginning of the range: " << endl;
    cin >> x;
    cout << "Enter the end of the range: " << endl;
    cin >> y;

    for (float i = x; i <= y; i = i + sh) {
        cout << i << endl;
    }

    return 0;
}
