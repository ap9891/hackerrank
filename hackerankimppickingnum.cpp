#include<iostream>
#include<algorithm>
using namespace std;
int picknum(int *arr, int n)
{
    int ans=INT_MIN;
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        int count=1;
        int min = arr[i];
        for (int j = i+1; j < n; j++)
        {          
            if((arr[j] - min) <= 1)
            {
                count++;
            }
        }
        ans= max(ans,count);
    }
    return ans;
}
int main()
{
    int n,arr[1000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<picknum(arr,n);
    return 0;
}