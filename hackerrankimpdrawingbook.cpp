#include<iostream>
#include<cmath>
using namespace std;
int book(int n, int p)
{
    if(n%2==0)
    {
    float count1=0,count2=0;
    for (int i = 2; i <= n; i++)
    {
        if(i <= p)
        {
            count1++;
        }
        else if (i > p)
        {
            count2++;
        }
        
    }
    // cout<<count1/2.0<<" "<<count2/2.0<<endl;
    double x=count1/2.0;
    double y=count2/2.0;
    // cout<<round(x)<<" "<<round(y)<<endl;
    return min(round(x),round(y));
    }
    else
    {
    float count1=0,count2=0;
    for (int i = 2; i < n; i++)
    {
        if(i <= p)
        {
            count1++;
        }
        else if (i > p)
        {
            count2++;
        }
        
    }
    // cout<<count1/2.0<<" "<<count2/2.0<<endl;
    double x=count1/2.0;
    double y=count2/2.0;
    // cout<<round(x)<<" "<<round(y)<<endl;
    return min(round(x),round(y));
    }
    
}
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<book(n,p);
    return 0;
}