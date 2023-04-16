#include <iostream>
using namespace std;

float sum(int);

int main()
{
	int k;
	cout << "Enter the value k: ";
	cin >> k;
	float s = sum(k);
	cout << "\nThe result is: " << s << endl;
	return 1;
}

float sum(int n)
{
	if (n == 0) return 0;
	return (sum(n - 1) + (float)1 / n);
}