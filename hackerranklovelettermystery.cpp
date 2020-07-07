#include<iostream>
#include<string.h>
using namespace std;
int palindrome(char *str)
{
    int d1=0;
    int len = strlen(str);
    int s=0,e=len-1;
    while(s < e)
    {
        if(str[s] != str[e])
        {
            if((str[s] > str[e]) || (str[s] < str[e]))
            {
                d1 += abs(str[s] - str[e]);
            }
        }
        s++;
        e--;
    }
    return d1;
}
int main()
{
    int t;
    cin>>t;
    char str[100001];
    cin.get();
    while(t--)
    {
    cin.getline(str,100001);
    cout<<palindrome(str)<<endl;
    }
    return 0;
}

  


