#include<iostream>
using namespace std;
int main()
{
    int price,n,m,k[1001],usb[1001];
    cin>>price>>n>>m;
    int res=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>k[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>usb[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (k[i] + usb[j] <= price)
            {
                res = max(res,k[i]+usb[j]);
            }
            
        }
        
    }
    cout<<res<<endl;
    return 0;
}