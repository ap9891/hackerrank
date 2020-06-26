#include<iostream>
using namespace std;
int service(int * arr, int s,int e)
{
    int min = arr[s];
    for (int  i = s; i <= e; i++)
    {
        if(min >  arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int n,t,arr[100000];
    cin>>n>>t;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int s,e;
    for (int j = 0; j <t ; j++)
    {
        cin>>s>>e;
        cout<<service(arr,s,e)<<endl;
    }
    
}