#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
int EvenValCount(int[], int);
void Output(int[], int);

int main()
{
	cout << "Problem 095 - To Vinh Tien - 22521474" << endl;
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
	int counter = EvenValCount(arr, n);
	cout << "\nThe number of even element in the inputted array is: " << counter << ".";
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
	cout << endl;
}

int EvenValCount(int arr[], int n)
{
	if (n == 0)
		return 0;
	int counter = EvenValCount(arr, n - 1);
	if (arr[n - 1] % 2 == 0)
		counter++;
	return counter;
}

void Output(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0 && i != 0)
			cout << endl;
		cout << setw(10) << setprecision(6) << arr[i];
	}
}
