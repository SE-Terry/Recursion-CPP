#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int FindN(int);

int main()
{
    cout << "Problem 050 - To Vinh Tien - 22521474" << endl;
    int n;
    cout << "\nEnter the value of n:                    ";
    cin >> n;
    while (n > INT_MAX || n < 0)
    {
        cout << "The inputted value of n is invalid. Please re-enter the value of n." << endl;
        cout << "\nEnter the value of n:                    ";
        cin >> n;
    }
    switch (n % 10)
    {
    case 1: 
    {
        cout << "\nThe " << n << "st number in the sequence is :    " << FindN(n) << "." << endl;
        break;
    }        
    case 2:
    {
        cout << "\nThe " << n << "nd number in the sequence is :    " << FindN(n) << "." << endl;
        break;
    }        
    case 3:
    {
        cout << "\nThe " << n << "rd number in the sequence is :    " << FindN(n) << "." << endl;
        break;
    }        
    case 4: case 5: case 6: case 7: case 8: case 9: case 0:
    {
        cout << "\nThe " << n << "th number in the sequence is :     " << FindN(n) << "." << endl;
        break;
    }        
    }
    return 0;
}

int FindN(int n)
{
    if (n == 0)
        return -1;
    if (n == 1)
        return 3;
    int x = FindN(n - 1);
    int y = FindN(n - 2);
    return (5 * x - y);
}