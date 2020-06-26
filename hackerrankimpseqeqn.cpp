#include<iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    
    for (int x = 1; x <= n; x++)
    {
        for (int i = 1; i <=n; i++)
        {
            if(x == arr[arr[i]])
            {
                cout<<i<<endl;
            }
        }
        
    }
    return 0;
}