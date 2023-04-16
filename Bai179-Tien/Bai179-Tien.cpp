#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
void ShiftRightRt(int[], int);

int main()
{
	cout << "Problem 179 - To Vinh Tien - 22521474" << endl;
	int n = 0;
	while (n <= 0)
	{
		cout << "\nEnter n:		";
		cin >> n;
	}
	int* arr = new int[n];
	Input(arr, n);
	cout << "\nYour inputted array is:" << endl;
	Output(arr, n);
	ShiftRightRt(arr, n);
	cout << "\nEdited array is:" << endl;
	Output(arr, n);
	delete[]arr;
	return 1;
}

void Input(int arr[], int& n)
{
	cout << "\nYour inputted array will have " << n << " elements." << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter arr[" << i << "] element:	";
		cin >> arr[i];
	}
}

void Output(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(6) << arr[i];
	}
	cout << endl;
}

void ShiftRightRt(int arr[], int n)
{
	if (n <= 1)
		return;
	swap(arr[n - 2], arr[n - 1]);
	ShiftRightRt(arr, n - 1);
}