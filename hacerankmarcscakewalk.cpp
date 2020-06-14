#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    int count =0;
    long long int p=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int j = n-1; j >= 0; j--)
    {
        p += arr[j]*pow(2,count);
        count++;
    }
    cout<<p<<endl;
    return 0;
}