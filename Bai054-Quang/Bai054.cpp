#include<iostream>

using namespace std;

float Tinh(float, int);

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	float y;
	cout << "Nhap y: ";
	cin >> y;
	float kq = Tinh(y, k);
	cout << "Ket qua la: " << kq;
	return 0;
}
float Tinh(float x, int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return x * x;
	float a = Tinh(x, n - 1);
	float b = Tinh(x, n - 2);
	return ((1 + x * x) * a + x * x * b);
}