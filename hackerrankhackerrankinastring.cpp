#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int t;
    cin>>t;
    while(t--)
    {
    string str1 = "hackerrank";
    cin>>str;
    if(str.length() < str1.length())
    {
        cout<<"NO"<<endl;
    }
    int j=0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        
        if(j <= str1.length() && str1[j]==str[i])
        {
            j++;
        }
    }
    if (j==str1.length())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}