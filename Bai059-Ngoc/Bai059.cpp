#include<iostream>
#include<cmath>
using namespace std;
float sum(float, int);
int main()
{
	float x;
	cin >> x;
	int n;
	cin >> n;
	float kq = sum(x, n);
	cout << "tong day tu 1 den (x^(2n+1)/(2*n+1)!) la :" << kq;
	return 0;
}
float sum(float x, int n)
{
	if (n == 0)
		return (1+x);
	if (n == 1)
		return (1 + x+ x*x*x/6);
	float a = sum(x, n - 1);
	float b = sum(x, n - 2);
	float hs = x * x / (2 * n) / (2 * n + 1);
	return ((1 + hs) * a - hs * b);
}