#include<iostream>
using namespace std;
long long Dequy(int);
int main()
{
	int k;
	cin >> k;
	long long kq = Dequy(k);
	cout << kq;
	return 0;
}
long long Dequy(int k)
{
	if (k == 0) return 0;
	return Dequy(k - 1) + k * (k + 1) * (k + 2);
}