#include<iostream>
#include<cmath>

using namespace std;

int TimViTri(float[], int);

int main()
{
	float a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int kq = TimViTri(a, n);
	cout << kq;
	return 0;
}
int TimViTri(float a[], int n)
 {
	 {
		 if (n == 1)
			 return 0;

		 int lc = TimViTri(a, n - 1);
		 if (a[n - 1] < a[lc])
			 lc = n - 1;
		 return lc;
	 }
