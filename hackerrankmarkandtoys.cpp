#include<iostream>
#include<algorithm>
using namespace std;
int toys(int *arr, int n,long long int k)
{

    int count=-1;
    int sum=0,i;
    sort(arr,arr+n);
     for (i = 0; i < n; i++)
    {
        if(sum <=k)
        {
            cout<<sum<<" ";
            sum +=arr[i];
            count++;
        }
    }  
    return count;
}
int main()
{
    int n,arr[100001];
    long long int k;
    cin>>n>>k;
    for(int i=0; i< n;i++)
    {
        cin>>arr[i];
    }
    cout<<toys(arr,n,k);
    return 0;
}