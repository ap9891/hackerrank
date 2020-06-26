#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m,w;
    while(t--)
    {  
        cin>>n>>m>>w;
        int ans=0;
        int temp = ans=n/m;
        while (temp >= w)
        {
            ans++;
            temp = temp - w;
            temp++;
        }
        cout<<ans<<endl;
    }
    return 0;
}