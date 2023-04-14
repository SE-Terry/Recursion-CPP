#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float S(float,int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << S(x,n) << endl;
	return 0;
}

float S(float x, int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return x;
	}
	return (1 + x/n) * S(x,n - 1) - x/n * S(x,n - 2);
}