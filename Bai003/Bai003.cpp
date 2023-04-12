#include <iostream>
using namespace std;

int factorial(int);

int main()
{
	int n;
	cout << "Enter the value n: ";
	cin >> n;
	int T = factorial(n);
	if (T == 0)
		cout << "Stack overflow.";
	else
		cout << "\nThe result is: " << T << endl;	
	return 1;
}

int factorial(int n)
{
	if (n == 0)
		return 1;
	int T = factorial(n - 1);
	if ((long long)T * n > INT_MAX)
		return 0;
	return (T * n);
	//return factorial(n - 1) * n;
}