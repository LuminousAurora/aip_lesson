#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

struct Robot {
    float speed;
    float radius;
    float thrust_ratio;
};

Robot plane;
void traction();

int main() {

    traction();
    return 0;
}

void traction() {
    cout << "Enter the speed of rotation of the propeller of the aircraft: ";
    cin >> plane.speed;

    cout << "Enter the radius of the propeller at the plane: ";
    cin >> plane.radius;

    cout << "Enter the thrust coefficient of the aircraft: ";
    cin >> plane.thrust_ratio;

    cout << "Thrust = " << plane.speed * plane.radius * plane.thrust_ratio;
}
