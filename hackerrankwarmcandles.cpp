#include<iostream>
#include<algorithm>
using namespace std;
void candles(int *arr, int n)
{
    int count =0;
    sort(arr,arr+n);
    int max = arr[n-1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            count++;
        }
        
    }
    cout<<count;
}

int main()
{
    int n,arr[100001];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    candles(arr,n);
    return 0;
}
