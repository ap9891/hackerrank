#include<iostream>
using namespace std;
void sumtriplet(int* a,int *b)
{
    int alice=0,bob=0;
    int i,j;
    for ( i = 0,j=0; i < 3,j<3; i++,j++)
    {
        if(a[i] > b[j])
        {
            alice++;
        }
        else if (a[i] < b[j])
        {
            bob++;
        }
    }
    cout<<alice<<" "<<bob;
}
int main()
{
    int a[101],b[101];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < 3; j++)
    {
        cin>>b[j];
    }
    sumtriplet(a,b);
    return 0;
}