#include<iostream>
#include<algorithm>
using namespace std;
int k=0;
int main()
{
    int n,arr[100001];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=1;
    sort(arr,arr+n);
    int min = arr[0];
    for (int i = 1; i <n;i++ )
    {
        if(arr[i] - min > 4)
        {
            min = arr[i];
            count++;
        }
    }
    cout<<count;
    return 0;
}