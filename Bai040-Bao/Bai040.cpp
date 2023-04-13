#include <iostream>
using namespace std;

int UocLeLonNhat(int);

int main()
{
	int k;
	cout << "Nhap so nguyen: ";
	cin >> k;
	int kq = UocLeLonNhat(k);
	cout << "Uoc le lon nhat la: " << kq;
	return 1;
}

int UocLeLonNhat(int n)
{
	n = abs(n);
	if (n & 2 !=0)
		return n;
	return UocLeLonNhat(n / 2);
}