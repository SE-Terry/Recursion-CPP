#include <iostream>

using namespace std;

float Tong(int);

float Tong(int n)
{
	if (n == 0)
		return 0;
	float s = Tong(n - 1);
	return (s + 1 / ((n + 1) * sqrt(n) + n * sqrt(n + 1)));
}

int main()
{
	int k;
	cout << "Nhap n: ";
	cin >> k;

	float kq = Tong(k);
	cout << "S(" << k << ")= " << kq;
	return 1;
}