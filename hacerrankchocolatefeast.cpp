////time limit exceed
// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     int n,c,w;
//     cin>>t;
//     while(t--)
//     {
//     cin>>n>>c>>w;
//     int rem=0;
//     int c2=0,c3=0,c4=0;
//     int c1 = n/c;
//     if (w <= c1)
//     {
//         c2 = c1/w;
//         // cout<<c2;
//         rem = c1 - w;
//     }
//     if(c2 <=w)
//     {
//         c4=c2/w;
//     }
//     // cout<<rem<<endl;
//     // if(rem>0)
//     // {
//         while(rem){
//             int z= c2+rem;
//         if((z) >= w)
//         {
//             c3 = w/z;
//             // cout<<c3<<endl;
//         }
//         rem = (c2+rem) - w;
//         }
//     // }
//     // cout<<c1<<" "<<c2<<" "<<c4<<" "<<c3<<" ";
//     cout<<c1+c2+c3+c4<<endl;
//     }
//     return 0;
// }
////////////
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,m,w;
    while(t--)
    {  
        cin>>n>>m>>w;
        int ans=0;
        int temp = ans=n/m;
        while (temp >= w)
        {
            ans++;
            temp = temp - w;
            temp++;
        }
        cout<<ans<<endl;
    }
    return 0;
}