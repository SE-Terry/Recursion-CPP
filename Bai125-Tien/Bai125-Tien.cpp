#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
bool PerfNumChk(int);
int LastPerfEle(int[], int);

int main()
{
	cout << "Problem 101 - To Vinh Tien - 22521474" << endl;
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
	int lpe = LastPerfEle(arr, n);
	if (lpe == -1)
		cout << "\nThe inputted array doesn't exist any perfect number/element.";
	else
		cout << "The last perfect number/element in the inputted array is: " << lpe << ".";
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

bool PerfNumChk(int e)
{
	int sum = 0;
	for (int i = 1; i < e; i++)
		if (e % i == 0)
			sum += i;
	return (sum == e);
}

int LastPerfEle(int arr[], int n)
{
	if (n == 0)
		return -1;
	if (PerfNumChk(arr[n - 1]) == true)
		return arr[n - 1];
	return LastPerfEle(arr, n - 1);
}