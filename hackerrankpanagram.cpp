#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[1001];
    int freq[26]={0};
    cin.getline(str,1001);
    int len = strlen(str);
    int index=0;
    for (int i = 0; i < len; i++)
    {
        
        char ch = str[i];
        index = tolower(ch) - 'a';
        freq[index]++;
    }
    // for (int j = 0; j < 26; j++)
    // {
    //     cout<<freq[j]<<" ";
    // }
    
    int i;
    for ( i = 0; i < 26; i++)
    {
        if(freq[i] ==0)
        {
            cout<<"not pangram";
            break;
        }
    }
    if(i==26)
    {
        cout<<"pangram";
    }
}