#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Input(int[], int&);
bool ChkSqrNum(int);
int SumSqrNum(int[], int);
void Output(int[], int);

int main()
{
	cout << "Problem 089 - To Vinh Tien - 22521474" << endl;
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
	int s = SumSqrNum(arr, n);
	cout << "\nThe sum of all square numbers in the input array is: " << s << ".";
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

bool ChkSqrNum(int n)
{
	int root = sqrt(n);
	return root * root == n;
}

int SumSqrNum(int arr[], int n)
{
	if (n == 0)
		return 0;
	int s = SumSqrNum(arr, n - 1);
	if (ChkSqrNum(arr[n - 1]) == true)
		s += arr[n - 1];	
	return s;
}