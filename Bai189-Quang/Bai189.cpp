#include<iostream>
#include<cmath>

using namespace std;

void LietKe(int[], int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	LietKe(a, n);
	return 0;
}
void LietKe(int a[], int n)
{
	if (n <= 2)
		return;
	if (a[n-2] % 2 == 0 && (a[n - 3] % 2 == 0 || a[n - 1] % 2 == 0))
	{
		cout << a[n - 2] << " ";
	}
	LietKe(a, n - 1);
}