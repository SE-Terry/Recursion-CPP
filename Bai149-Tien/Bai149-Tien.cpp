#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
int EqualEleChk(int[], int);

int main()
{
	cout << "Problem XXX - To Vinh Tien - 22521474" << endl;
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
	int checker = EqualEleChk(arr, n);
	if (checker == true)
		cout << "\nThe inputted array contains all equal elements.";
	else
		cout << "\nThe inputted array doesn't contains all equal elements.";
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

int EqualEleChk(int arr[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if ((arr[n - 2] == arr[n - 1]) && EqualEleChk(arr, n - 1) == true)
		return 1;
	return 0;
}