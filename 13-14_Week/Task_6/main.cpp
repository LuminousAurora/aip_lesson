#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

const int Nmax = 20;

int main()
{
    int A[Nmax];
    int B[Nmax];
    int n;
    int i;

    cout << "Array size: ";
    cin >> n;


    cout << "Array 1: " << endl;
    for (i = 0; i < n; i++)
        cin >> A[i];


    cout << "Array 2: " << endl;;
    for (i = 0; i < n; i++)
        cin >> B[i];

    cout << "Array 1-2: " << endl;
    for (i = 0; i < n; i++)
        cout << B[i] - A[i] << " ";

    return 0;
}
