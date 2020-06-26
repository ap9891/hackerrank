#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        int h=1;
        for (int i = 1; i <= n; i++)
        {
            if(i%2==0)
            {
                h = h + 1;
            }
            else
            {
                h = h*2;
            }
            
        }
         cout<<h<<endl;;
    }

    }
    return 0;
}