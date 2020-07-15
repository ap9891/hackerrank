#include<iostream>
#include<string.h>
using namespace std;
void timeconversion(string str)
{
    int n = str.length();
    int h1 = (int)str[0] - '0';
    int h2 = (int)str[1] - '0';
    int h = h1*10 + h2%10;
    if(str[n-2] == 'P')
    {
        if (h == 12)
        {
            cout<<"12";
            for (int i = 2; i < n-2; i++)
            {
            cout<<str[i];
            }
            
        }
        else
        {
            h=h+12;
            cout<<h;
            for (int i = 2; i < n-2; i++)
            {
                cout<<str[i];
            }
        }
    }
    else
    {
        if (h == 12)
        {
            cout<<"00";
            for (int i = 2; i < n-2; i++)
            {
                cout<<str[i];
            }
        }
        else
        {
            for (int i = 0; i < n-2; i++)
            {
                cout<<str[i];
            }
            
        }
        
    }
    
}
int main()
{
    string str;
    cin>>str;
    timeconversion(str);
    return 0;
}