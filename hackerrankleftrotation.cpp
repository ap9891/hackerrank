#include<iostream>
using namespace std;
void rotation(int *arr, int n,int l)
{
    int i = n;
    while (i >= 0)
    {
        arr[i+l] = arr[i];
        i--;
    }
    i=0;
    int j=n;
    for (int k = 1; k <=l ; k++)
    {
        arr[i] = arr[j];
        i++;
        j++;
    }
    for(int p=0;p<n;p++)
    {
        cout<<arr[p]<<" ";
    }
}
int main()
{
    int n,l,arr[100001];
    cin>>n>>l;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rotation(arr,n,n-l);
    return 0;
}