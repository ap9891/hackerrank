#include<iostream>
using namespace std;
void thehurdlerace(int *arr, int n,int k)
{
    int max= INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    } 
     if (k < max)
        {
            cout<< max - k;
        }
        else
        {
            cout<<"0";
        }
}
int main()
{
    int n,arr[1000],k;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    thehurdlerace(arr,n,k);
    return 0;
}