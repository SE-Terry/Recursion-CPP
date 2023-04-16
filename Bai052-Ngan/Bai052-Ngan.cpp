#include <iostream>

using namespace std;

float Tinh(float, int);

float Tinh(float x, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x) * a - x * b);
}

int main()
{
	float y;
	cout << "Nhap x: ";
	cin >> y;

	int k;
	cout << "Nhap n: ";
	cin >> k;

	float kq = Tinh(y, k);
	cout << "Ket qua la: " << kq;
	return 0;
}