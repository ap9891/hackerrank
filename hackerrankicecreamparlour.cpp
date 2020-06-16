#include<iostream>
using namespace std;
void icecream(int *cost,int n,int m)
{
    for(int i=1 ;i <= n ;i++ )
    {
        int min = cost[i];
        for (int j = i+1; j <= n; j++)
        {
            if(min+cost[j] ==m)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
        
    }
}
int main()
{
    int t,cost[10001];
    cin>>t;
    int n,m;
    while(t--)
    {
    cin>>m>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>cost[i];
    }
    icecream(cost,n,m);
    }
    return 0;
}