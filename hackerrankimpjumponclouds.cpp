#include<iostream>
using namespace std;
int main()
{
    int n,c[100],k;
    cin>>n>>k;
    int e=100;
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    for (int i = 0; i < n; i+=k)
    {
        e=e-(1+c[i]*2);
    }
    cout<<e<<endl;
    return 0;
}