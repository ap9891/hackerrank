#include<iostream>
using namespace std;
void sumbig(int *arr,int n)
{
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[100001];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sumbig(arr,n);
    return 0;
}