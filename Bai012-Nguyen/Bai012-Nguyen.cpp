#include <iostream>
#include <iomanip>
using namespace std;

float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << setprecision(5) << Tich(n) << endl;
	return 0;
}

float Tich(int n) {
	if (n == 0) {
		return 1;
	}
	return Tich(n - 1) * (1 + (float)1 / n / n);
}