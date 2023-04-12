#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

void merge(float[], int, int, int);
void mergeSort(float[], int, int);

int main() 
{
    cout << "Problem 062 - To Vinh Tien - 22521474" << endl;
    int n;
    cout << "\nEnter the number of elements:       ";
    cin >> n;
    while (n > INT_MAX || n < 1)
    {
        cout << "\nOut of range. Please re-enter the number of elements:      ";
        cin >> n;
    }        
    static float arr[1000000];
    cout << "\nPlease enter " << n << " elements!" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of arr[" << i << "]:          ";
        cin >> arr[i];
        while (arr[i] > FLT_MAX || arr[i] < FLT_MIN)
        {
            cout << "Out of range. Please re-enter the value of arr[" << i << "]:       ";
            cin >> arr[i];
        }
    }        
    mergeSort(arr, 0, n - 1);
    cout << "\nSorted array:" << endl;
    for (int i = 0; i < n; i++)
        cout << setprecision(5) << arr[i] << " ";
    cout << endl;
    return 0;
}

void merge(float arr[], int left, int mid, int right) 
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    static float L[1000000], R[1000000];
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(float arr[], int left, int right) 
{
    if (left < right) 
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}