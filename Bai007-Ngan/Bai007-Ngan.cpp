#include <iostream>

using namespace std;

float Tong(int);

float Tong(int n)
{
	if (n == 0)
		return 0.5;
	float s = Tong(n - 1);
	return (s + (float)(2 * n + 1) / (2 * n + 2));
}

int main()
{
	int k;
	cout << "Nhap n: ";
	cin >> k;

	float kq = Tong(k);
	cout << "S(" << k << ")=" << kq;
	return 1;
}