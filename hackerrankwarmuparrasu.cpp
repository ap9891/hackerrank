#include<iostream>
using namespace std;
int sumarray(int *arr,int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n,arr[1001];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sumarray(arr,n);
    return 0;
}