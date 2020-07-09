#include<iostream>
#include<cmath>
using namespace std;
    int count=0;

void powersum(int x , int n, int i)
{
    
    if(x==0)
    {
        count++;
    }
    if(x<0)
    {
        return;
    }
    
    int leftsum=0;
    for (int j = i; leftsum >= 0; j++)
    {
        leftsum = x - (int)pow(j,n);
        powersum(leftsum,n,j+1);
    }
    return;
}
int main()
{
    int x,n;
    cin>>x>>n;
    powersum(x,n,1);
    cout<<count;
    
    return 0;
}