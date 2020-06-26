#include<iostream>
using namespace std;
int main()
{
    int dp[101][101]={0};
    int a[101];
    int b[101];
    int ans[101];
    int m,n;
    cin>>m>>n;
    for (int i = 1; i <= m; i++)
    {
        cin>>a[i];
    }
    for (int j = 1; j <= n; j++)
    {
        cin>>b[j];
    }
    // for (int i = 0; i <= m; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         dp[i][j] = 0;
    //     }
    // }
    for (int i = 1; i <=m ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] == b[j])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
        
    }
    int z=0;
    int i=m;
    int j=n;
    while (i>0 && j>0)
    {
        if (a[i] == b[j])
        {
            ans[z]=a[i];
            z++;
            i--;
            j--;
        }
        else
        {
            if (dp[i-1][j] > dp[i][j-1])
            {
                i--;
            }
            else
            {
                j--;
            }
            
        }
        
    }
    for (int i = z-1; i >=0; i--)
    {
        cout<<ans[i]<<" ";
    }
    
return 0;
    
}