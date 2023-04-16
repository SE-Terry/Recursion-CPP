#include <iostream>
#include <cmath>

using namespace std;

int DemSoChan(int);

int DemSoChan(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 == 0)
			return 1;
		return 0;
	}
	int dem = DemSoChan(n / 10);
	int dv = n % 10;
	if (dv % 2 == 0)
		return dem + 1;
	return dem;
}

int main()
{
	int k;
	cout << "Nhap n: ";
	cin >> k;

	int kq = DemSoChan(k);
	cout << "Ket qua la: " << kq;
	return 1;
}