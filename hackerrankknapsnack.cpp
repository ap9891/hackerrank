#include<iostream>
using namespace std;
int knapsack(int *sumt,int n,int sum)
{
    if(n==0)
    {
        return 0;
    }
    int inc=0,exc=0;
    if (sum - sumt[n-1]>=0)
    {
        inc =sumt[n-1] + knapsack(sumt,n,sum - sumt[n-1]);
    }
    exc = knapsack(sumt,n-1,sum);
    return max(inc,exc);
}
int main()
{
    int n,sum,sumt[1000];
    cin>>n>>sum;
    for (int i = 0; i < n; i++)
    {
        cin>>sumt[i];
    }
    int dp[1000];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    
    cout<<knapsack(sumt,n,sum)<<endl;
    // cout<<topdown(sumt,n,sum,dp);

    return 0;
}