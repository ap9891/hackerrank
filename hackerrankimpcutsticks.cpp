#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[10000];
    cin>>n;
    for(int i=0; i < n ;i++)
    {
        cin>>arr[i];
    }
    int remain=0;
    remain=n;
    cout<<remain<<endl;
    sort(arr,arr+n);
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != min)
        {
            min = arr[i];
            cout<<remain-i<<endl;
        }
    }
    return 0;
}