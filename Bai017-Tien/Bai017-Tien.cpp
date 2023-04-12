#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

float sum(int);

int main()
{
    cout << "Problem 017 - To Vinh Tien - 22521474" << endl;
    int n;
    cout << "\nEnter the value of n:        ";
    cin >> n;
    while (n > INT_MAX || n < 0)
    {
        cout << "The inputted value of n is invalid. Please re-enter the value of n." << endl;
        cout << "\nEnter the value of n:        ";
        cin >> n;
    }
    cout << "\nThe result of S(" << n << ") is:      " << setw(5) << setprecision(5) << sum(n) << "." << endl;
    return 0;
}

float sum(int n)
{
    if (n == 0)
        return 0;
    return (sum(n - 1) + (float)1 / (n * (n + 1) * (n + 2) * (n + 3)));
}