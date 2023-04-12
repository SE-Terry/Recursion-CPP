#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

void enumerate(int);

int main()
{
    cout << "Problem 035 - To Vinh Tien - 22521474" << endl;
    int n;
    cout << "\nEnter the value of n:           ";
    cin >> n;
    while (n > INT_MAX || n < 0)
    {
        cout << "The inputted value of n is invalid. Please re-enter the value of n." << endl;
        cout << "\nEnter the value of n:        ";
        cin >> n;
    }
    cout << "\nHailstone sequences - Collatz conjecture of n is: " << endl << endl;
    enumerate(n);
    cout << endl;
    return 0;
}

void enumerate(int n)
{
    if (n == 1)
    {
        cout << setw(6) << n;
        return;
    }
    cout << setw(6) << n;
    if (n % 2 == 0)
        enumerate(n / 2);
    else
        enumerate(3 * n + 1);
}