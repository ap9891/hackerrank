#include<iostream>
using namespace std;
// int clouds(int *c, int n,int k)
// {
//     int e=100;
//     for (int i = 0; i < n; i=i+k)
//     {
//         if(c[i] == 0)
//         {
//             e=e-3;
//         }
//         else
//         {
//             e=e-1;
//         }
        
//     }
//     return e;
// }
int main()
{
    int n,c[100],k;
    cin>>n>>k;
    int e=100;
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    // cout<<clouds(c,n,k);
    for (int i = 0; i < n; i+=k)
    {
        e=e-(1+c[i]*2);
    }
    cout<<e<<endl;
    return 0;
}