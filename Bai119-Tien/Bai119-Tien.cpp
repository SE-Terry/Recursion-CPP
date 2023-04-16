#include <iostream>
#include <iomanip>
using namespace std;

void Input(int[], int&);
void Output(int[], int);
bool PrimeNumChk(int);
int FirstPrimeEle(int[], int);

int main()
{
	cout << "Problem 119 - To Vinh Tien - 22521474" << endl;
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
	int fpe = FirstPrimeEle(arr, n);
	if (fpe == -1)
		cout << "\nThe inputted array doesn't have any prime number/element.";
	else
		cout << "\nThe first prime number/element in the inputted array is: " << fpe << ".";
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

bool PrimeNumChk(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i * i <= n; i++) 
		if (n % i == 0) 
			return false;
	return true;
}

int FirstPrimeEle(int arr[], int n)
{
	if (n == 0)
		return -1;
	int decoy = FirstPrimeEle(arr, n - 1);
	if (decoy != -1)
		return decoy;
	if (PrimeNumChk(arr[n - 1]) == true)
		return arr[n - 1];
	return -1;
}