#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
void Output(float[], int);
int PosFind(float[], int, float);

int main()
{
	cout << "Problem 107 - To Vinh Tien - 22521474" << endl;
	int n = 0;
	float x;
	while (n <= 0)
	{
		cout << "\nEnter n:		";
		cin >> n;
	}
	cout << "\nEnter x:		";
	cin >> x;
	float* arr = new float[n];
	Input(arr, n);
	cout << "\nYour inputted array is:" << endl;
	Output(arr, n);
	int position = PosFind(arr, n, x);
	cout << "The position which element in the inputted array have the value equal to " << x << " is: " << position << "." << endl;
	delete[]arr;
	cout << endl;
	return 1;
}

void Input(float arr[], int& n)
{
	cout << "\nYour inputted array will have " << n << " elements." << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter arr[" << i << "] element:	";
		cin >> arr[i];
	}
}

void Output(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(6) << arr[i];
	}
	cout << endl;
}

int PosFind(float arr[], int n, float x)
{
	if (n == 1)
		return 0;
	int decoy = PosFind(arr, n - 1, x);
	if (abs(arr[n - 1] - x) < abs(arr[decoy] - x))
		decoy = n - 1;
	return decoy;
}