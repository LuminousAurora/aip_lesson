#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

struct Sensor {
    int min;
    int max;
    int error_rate;
    int speed;
};
Sensor first;
Sensor second;

void ComparisonSensor();

int main()
{
    cout << "Enter the min and max values for the first sensor" << endl;
    cin >> first.min >> first.max;
    cout << "Enter the error for the first sensor" << endl;
    cin >> first.error_rate;
    cout << "Enter the speed for the first sensor" << endl;
    cin >> first.speed;

    cout << "Enter the min and max values for the second sensor"<< endl;
    cin >> second.min >> second.max;
    cout << "Enter the error for the second sensor" << endl;
    cin >> second.error_rate;
    cout << "Enter the speed for the second sensor" << endl;
    cin >> second.speed;

    ComparisonSensor();

}
void ComparisonSensor(){
    if ((second.max - second.min) > (first.max - first.min)) {
        cout << "Sensor data with a large range" << endl;
        cout << "min max " << second.min << " " << second.max << endl;
        cout << "error_rate " << second.error_rate << endl;
        cout << "speed " << second.speed << endl;
    }
    else {
        cout << "Sensor data with a large range" << endl;
        cout << "min max " << first.min << " " << first.max << endl;
        cout << "error_rate " << first.error_rate << endl;
        cout << "speed " << first.speed << endl;
    }
}
