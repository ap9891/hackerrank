#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =0,valley=0;
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin>>ch;
        if(ch == 'U')
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count==0 && ch == 'U')
        {
            valley++;
        }
        
    }
    cout<<valley;
    return 0;
}