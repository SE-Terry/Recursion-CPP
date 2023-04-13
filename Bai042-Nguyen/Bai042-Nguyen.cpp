#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool is_toan_chan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (is_toan_chan(n)) {
		cout << "cac chu so cua n deu la chan" << endl;
	}
	else {
		cout << "cac chu so cua n khong toan chan" << endl;
	}
	return 0;
}

bool is_toan_chan(int n) {
	n = abs(n);
	if (n <= 9) {
		if (n % 2 == 0) {
			return true;
		}
		return false;
	}
	int dv = n % 10;
	if (dv % 2 == 1) {
		return false;
	}
	return is_toan_chan(n / 10);
}