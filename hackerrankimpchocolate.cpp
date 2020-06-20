#include<iostream>
using namespace std;
int chocolate(int *arr,int n,int m, int d)
{
    int count =0;
    // int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < m+i; j++)
        {
        sum+= arr[j];
        }
    if (sum == d)
    {
        count++;
    }
    else
    {
        continue;
    }
    
    }
    return count;
}
int main()
{
    int n,arr[1000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m,d;
    cin>>d>>m;
    cout<<chocolate(arr,n,m,d);
    return 0;

}