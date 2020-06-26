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
    int num =n;
    int count=0;
    while(n != 0)
    {
        int rem =0;
        rem = n%10;
        if(rem ==0)
        {
            n=n/10;
        }
        else{
        if(num%rem == 0)
        {
            count++;
        }
        
        n= n/10;
        }
    }
    cout<<count;
    cout<<endl;
    }
}
