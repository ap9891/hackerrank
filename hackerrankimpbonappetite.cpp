#include<iostream>
using namespace std;
void bonapetite(int *arr, int n,int k,int cost)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (i == k)
        {
            continue;
        }
        else
        {
            sum+=arr[i];
        }
    }
    int z=sum/2;
    if (z == cost)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        int y = abs(cost-z);
        cout<<y;
    }
}
int main()
{
    int n,k,arr[100001];
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int cost;
    cin>>cost;
    bonapetite(arr,n,k,cost);
    return 0;
}