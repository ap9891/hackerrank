#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p=5,sum=0;
    int first_day =2;
    for (int i = 2; i <= n; i++)
    {
        int mul = 3;
        p=p/2*mul;
        int like =p/2;
        sum += like;
        
    }
    cout<<sum+first_day;
}