#include<iostream>
using namespace std;
void grade(int n)
{
    int g=0;
    if(n>=38)
    {
        int y = n+2;
        int z = n+1;
        if (y%5 == 0)
        {
            g=y;
        }
        else if (z%5 == 0)
        {
            g=z;
        }
        else
        {
            g=n;
        }
        
    }
    else
    {
        g=n;
    }
    cout<<g;
}
int main()
{
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int n;
        cin>>n;
        grade(n);
        cout<<endl;
    }
    return 0;
}