#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

struct Robot {
    int Width;
    int Height;
    int Weight;
    int Maximum_speed;
};
Robot first;
Robot second;

void DataComparison();

int main()
{
    cout << "Enter the width and height of the first robot" << endl;
    cin >> first.Width >> first.Height;
    cout << "Enter the Weight of the first robot" << endl;
    cin >> first.Weight;
    cout << "Enter the maximum speed of the first robot" << endl;
    cin >> first.Maximum_speed;

    cout << "Enter the width and height of the second robot" << endl;
    cin >> second.Width >> second.Height;
    cout << "Enter the Weight of the second robot" << endl;
    cin >> second.Weight;
    cout << "Enter the maximum speed of the second robot" << endl;
    cin >> second.Maximum_speed;

    DataComparison();

}
void DataComparison() {
    if (first.Height > second.Height) {
        cout << "Data about the smallest robot" << endl;
        cout << "Width Height " << second.Width << " " << second.Height << endl;
        cout << "Weight " << second.Weight << endl;
        cout << "Maximum_speed " << second.Maximum_speed << endl;
    }
    else {
        cout << "Data about the smallest robot" << endl;
        cout << "Width Height " << first.Width << " " << first.Height << endl;
        cout << "Weight " << first.Weight << endl;
        cout << "Maximum_speed " << first.Maximum_speed << endl;
    }
}
