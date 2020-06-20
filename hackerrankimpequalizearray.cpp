#include<iostream>
#include<algorithm>
using namespace std;
int arr2[1000];
int k;
int array(int *arr, int n)
{
    int sum=0;
    sort(arr,arr+n);
    int count=1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            count ++;
        }
        else if(arr[i] != arr[i+1])
        {
            arr2[k] = count;
            k++;
            count = 1;
        }
    }
    sort(arr2, arr2+k);
    for (int i = 0; i <= k-2; i++)
    {
        sum += arr2[i];
    }
    return sum;
}
int main()
{
    int n,arr[1000];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<array(arr,n);
    return 0;
}