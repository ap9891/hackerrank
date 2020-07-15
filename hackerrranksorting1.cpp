#include<iostream>
using namespace std;
int main()
{
    int v,n,arr[10001];
    cin>>v>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == v)
        {
            cout<<i;
        }
    }
    return 0;
}