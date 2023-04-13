#include <iostream>
using namespace std;

float Tong(float, int);

int main()
{
	int k;
	cout << "Nhap so nguyen: ";
	cin >> k;
	float y;
	cout << " Nhap x: ";
	cin >> y;
	float kq = Tong(y, k);
	cout << "Tong la: " << kq;
	return 1;
}
float Tong(float x, int n)
{
	if (n == 0)
		return 1;
	return (Tong(x, n - 1) * x);
}