#include <iostream>
#include <iomanip>
using namespace std;

void Input(float[], int&);
void Output(float[], int);
int DistinguishEle(float[], int);

int main()
{
	cout << "Problem 185 - To Vinh Tien - 22521474" << endl;
	int n = 0;
	while (n <= 0)
	{
		cout << "\nEnter n:		";
		cin >> n;
	}
	float* arr = new float[n];
	Input(arr, n);
	cout << "\nYour inputted array is:" << endl;
	Output(arr, n);
	int counter = DistinguishEle(arr, n);
	if (counter == 1)
		cout << "\nThe inputted array contains equal elements.";
	else
		cout << "\nThe number of distinguish element in the inputted array is: " << counter << ".";
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

int DistinguishEle(float arr[], int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int counter = DistinguishEle(arr, n - 1);
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (arr[i] == arr[n - 1])
			flag = 0;
	if (flag == 1)
		counter++;
	return counter;
}