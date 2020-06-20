#include<iostream>
using namespace std;
int rev(int i)
{
    int rem=0,num=0;
    while( i != 0)
    {
        rem=i%10;
        num = num*10+rem;
        i=i/10;
    }
    return num;
}
int main()
{
    int start,end,k;
    cin>>start>>end>>k;
    int count =0;
    for (int i =start; i <= end; i++)
    {
        int y = rev(i);
        if ((i-y)%k==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}