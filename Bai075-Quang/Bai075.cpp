#include<iostream>
#include<iomanip>

using namespace std;

void LietKe(int[], int);
int ktToanLe(int);

int main()
{
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	LietKe(a, n);
	return 0;
}
void LietKe(int a[], int n)
{
	if (n == 0)
		return;
	LietKe(a, n - 1);
	if (ktToanLe(a[n - 1]))
	{
		cout << setw(6) << a[n - 1];
	}
}
int ktToanLe(int n)
{
	n = abs(n);
	if (n <= 9)
	{
		if (n % 2 != 0)
			return 1;
		return 0;
	}
	int dv = n % 10;
	if (ktToanLe(n / 10) == 1 && dv % 2 != 0)
		return 1;
	return 0;

}