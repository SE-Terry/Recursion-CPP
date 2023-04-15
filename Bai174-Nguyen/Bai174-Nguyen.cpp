#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void nguyen_hoa(float a[], int n);
void NguyenHoa(float a[], int n);

int main()
{
	float a[5] = { 2.3,4.5,6.7,1.2,-8.6 };
	NguyenHoa(a, 5);
	for (int i = 0; i < 5; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}

void NguyenHoa(float a[], int n)
{
	if (n == 0)
		return;
	NguyenHoa(a, n - 1);
	if (a[n - 1] > 0)
		 a[n - 1] = (float)int(a[n - 1] + 0.5);
	else
		a[n - 1] = (float)int(a[n - 1] - 0.5);
}
