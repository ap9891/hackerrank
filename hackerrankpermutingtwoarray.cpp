#include<iostream>
#include<algorithm>
using namespace std;
bool comparator(int a, int b)
{
    return a>b;
}
int main()
{
    int q;
    cin>>q;
    int n;
    long long int k;
    while(q--)
    {
    cin>>n>>k;
    int arr[1000],arr1[10000];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    sort(arr,arr+n);
    sort(arr1,arr1+n,comparator);
    int j;
    for (j = 0; j < n; j++)
    {
        if(arr[j] + arr1[j] < k)
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    if(j== n)
    {
        cout<<"YES"<<endl;
    }
    }
    return 0;
}