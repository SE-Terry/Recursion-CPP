#include<iostream>
using namespace std;
int DemConTang(float[], int);
bool ktraTang(float[], int, int, int);
void Nhap(float[], int&);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	int dem= DemConTang(a, n);
	cout << " So mang con tang co do dai lon hon 1 la: " << dem;
	return 0;
}
int DemConTang(float a[], int n)
{
	if (n == 1)
		return 0;
	int dem=DemConTang(a, n - 1);
	for (int l = 1; l < n - l; l++) {
		for (int vt = 0; vt < l; vt++) {
			if (ktraTang(a, n, vt, l) == 1)
		}
	}


}
int countIncreasingSubarrays(double arr[], int n, int start, int end) {
	if (end - start < 1 || arr[start] >= arr[start + 1]) {
		return 0;
	}

	int count = 1;  
	int i = start + 1;
	while (i <= end && arr[i] > arr[i - 1]) {
		count++;
		i++;
	}

	// Đ? quy đ? t?m các m?ng con tăng ti?p theo b?t đ?u t? v? trí k?t thúc m?ng con trư?c đó
	return count + countIncreasingSubarrays(arr, n, i, end);
void Nhap(float a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
}