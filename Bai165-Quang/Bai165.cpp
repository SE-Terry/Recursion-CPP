#include<iostream>
#include<cmath>

using namespace std;

void ThemViTri(int[], int&, int , int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	int x, vt;
	cin >> x >> vt;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ThemViTri(a, n, x, vt);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
void ThemViTri(int a[], int& n, int x, int vt)
{
	if (vt == n)
	{
		a[n] = x;
		n++;
		return;
	}
	swap(a[vt], x);
	ThemViTri(a, n, x, vt + 1);
}
