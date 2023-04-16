#include <iostream>
#include <iomanip>

using namespace std;

int TinhAn(int);
int TinhBn(int);

int TinhAn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return (3 * y + 2 * x);
}

int TinhBn(int n)
{
	if (n == 1)
		return 1;
	int x = TinhAn(n - 1);
	int y = TinhBn(n - 1);
	return(x + 3 * y);
}

int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;

	int kq;
	cout << "\nDay ket qua A: ";
	for (int i = 0; i <= k; i++)
	{
		kq = TinhAn(k);
	}
	cout <<setw(8) << kq;
	cout << "\nDay ket qua B: ";
	for (int i = 0; i <= k; i++)
	{
		kq = TinhBn(k);
	}
	cout << setw(8) << kq;

}