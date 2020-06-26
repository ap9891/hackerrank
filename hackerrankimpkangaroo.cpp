#include<iostream>
using namespace std;
bool kangaroo(int x1, int v1,int x2, int v2)
{
    int d;
    d = abs(x1-x2);
    if (d ==0 && v1!=v2)
    {
        x1=x1+v1;
        x2=x2+v2;
        d = abs(x1-x2);
    }
    else if(d==0 && v1==v2)
    {
        return true;
    }
    else if (x1>x2 && v1>v2 || x2>x1 && v2>v1)
    {
        return false;
    }
    else
    {
        int i;
        for (i = 0; i < d; i++)
        {
            x1=x1+v1;
            x2=x2+v2;
            if (x1==x2)
            {
                return true;
            }
        }
        if(i==d)
        {
            return false;
        }
    }
    return false;
}
int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if (kangaroo(x1,v1,x2,v2))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
