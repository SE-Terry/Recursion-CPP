//Dinh nghia ham trong sach dong 02967. sai khai bao mang int[] thanh float[]//
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
void OddPosIncr(int[], int);

int main()
{
	cout << "Problem 155 - To Vinh Tien - 22521474" << endl;
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
	OddPosIncr(arr, n);
	cout << "\nAfter-sorted array is:" << endl;
	Output(arr, n);
	delete[]arr;
	cout << endl;
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

void OddPosIncr(int arr[], int n)
{
	if (n == 1)
		return;
	for (int i = 0; i <= n - 2; i++)
		if (i % 2 != 0 && (n - 1) % 2 != 0 && arr[i] > arr[n - 1])
			swap(arr[i], arr[n - 1]);
	OddPosIncr(arr, n - 1);
}