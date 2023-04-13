#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float Tong_so_chan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nKet qua cua S(" << n << ") la:	" << setw(5) << setprecision(5) << Tong_so_chan(n) << endl;
	return 0;
}

float Tong_so_chan(int n) {
	n = abs(n);
	if (n <= 9) {
		if (n % 2 == 0) {
			return n;
		}
		return 0;
	}
	int dv = n % 10;
	if (dv % 2 == 0) {
		return Tong_so_chan(n / 10) + dv;
	}
	return Tong_so_chan(n / 10);
}