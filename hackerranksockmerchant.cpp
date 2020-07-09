#include<iostream>
#include<algorithm>
using namespace std;
int arr1[1000];
int k;
int sock(int *arr , int n)
{
    sort(arr,arr+n);
    int count = 1;
    for(int i=0;i < n ;i ++)
    {
        if (arr[i] == arr[i+1])
        {
            count++;
        }
        else
        {
            arr1[k] = count;
            k++;
            count=1; 
        }
    }
    int x =0;
    for (int j = 0; j < n; j++)
    {
        x+= arr1[j]/2;
    }
    return x;
}
int main()
{
    int n,arr[1000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sock(arr,n);
    return 0;
}