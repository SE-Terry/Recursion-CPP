#include<iostream>
#include<iomanip>
using namespace std;
void LietKe(float[], int, float, float);
void Nhap(float[], int&);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	int x;
	int y;
	cout << "Nhap x :";
	cin >> x;
	cout << "Nhap y :";
	cin >> y;
	LietKe(a, n,x,y);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}
void LietKe(float a[], int n, float x, float y)
{
	if (n == 0)
		return;
	LietKe(a, n - 1, x, y);
	if (x <= a[n - 1] &&a[n-1] <= y)
		cout << setw(10) << a[n - 1];
}