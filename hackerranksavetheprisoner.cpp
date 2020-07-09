#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,s;
        cin>>n>>m>>s;
        long long int p;
        p = (m +s -1)%n;
        if(p  == 0)
        {
            cout<<n<<endl;
        }
        else
        {
        cout<<p<<endl;
        }
    }
    return 0;
}
