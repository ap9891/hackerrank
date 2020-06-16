#include<iostream>
using namespace std;
void maths(int *arr, int n,int k)
{
    int count =0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= 0)
        {
            count++;
        }
    }
    if (k  <= count)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
int main()
{
    int t,arr[10001];
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        maths(arr,n,k);
        cout<<endl;
    }
    return 0;
}