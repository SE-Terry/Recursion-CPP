#include<iostream>
using namespace std;
int KtraGiamdan(int);
int main()
{
	int n;
	cin >> n;
	if (KtraGiamdan(n) == 1)
		cout << "n giam dan tu trai sang phai";
	else
		cout << " n khong giam dan tu trai sang phai";
	return 0;
}
int KtraGiamdan(int n )
{
	if (n <= 9) return 1;
	int dv = n % 10;
	int hc = (n / 10) % 10;
	if (KtraGiamdan(n - 1) && hc >= dv)
		return 1;
	return 0;
}