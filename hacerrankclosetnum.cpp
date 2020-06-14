#include<iostream>
#include<algorithm>
using namespace std;
void pairarray(int *arr, int n)
{
    sort(arr,arr+n);
    int min = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        if((arr[i+1] - arr[i]) <min)
        {
            min = arr[i+1] - arr[i];
        }
    }
    int y = min;
    for (int i = 0; i < n; i++)
    {
        if(arr[i+1] - arr[i] == min)
        {
            cout<<arr[i]<<" "<<arr[i+1]<<" ";
        }
    }
    
}
int main()
{
    int n,arr[10000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    pairarray(arr,n);
    return 0;
}
