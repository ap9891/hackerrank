#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long p=3;
    while(n > p)
    {
        n = n- p;
        p *= 2;
    }
    cout<<p-n+1<<endl;
    return 0;
}
