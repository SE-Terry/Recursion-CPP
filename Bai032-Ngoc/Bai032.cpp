#include<iostream>
#include<cmath>
using namespace std;
float TinhAn(int);
int main()
{
    int n;
    cin >> n;
    float kq = TinhAn(n);
    cout << kq;
    return 0;

}
float TinhAn(int n)
{
    if (n == 1)
        return 2;
    return (5* TinhAn(n-1)+12);
}