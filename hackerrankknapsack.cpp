#include<iostream>
using namespace std;
////only recursive call working
// int knapsack(int *sumt , int n,int sum)
// {
//     int dp[sum+1]={0};
//     for (int N = 1; N <= n; N++)
//     {
//         for (int s = 1; s <= sum; s++)
//         {
//             int inc=0,exc=0;
//             if(sum >= sumt[N-1])
//             {
//             inc = sumt[N-1] + dp[s - sumt[N-1]];
//             }
//             exc = 0+dp[s];
//             dp[s] = max(inc,exc);
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<dp[i]<<" ";
//     }
    
//     return dp[sum];
// }
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
// int topdown(int *sumt, int n, int sum,int *dp)
// {
//     if(n==0 || n==0)
//     {
//         dp[n]=n;
//         return 0;
//     }
//     if(dp[n] != -1)
//     {
//         return dp[n];
//     }
//     int inc=0,exc=0;
//     if(sum - sumt[n-1]>=0)
//     {
//         inc = sumt[n-1] + topdown(sumt,n,sum-sumt[n-1],dp);
//     }
//     exc = topdown(sumt,n-1,sum,dp);
//     dp[n] = max(inc,exc);
//     // dp[n] = ans;
//     return dp[n];
// }
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