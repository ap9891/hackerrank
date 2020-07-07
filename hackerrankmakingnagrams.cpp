#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[10001],str2[10001];
    cin.getline(str1,10001);
    cin.getline(str2,10001);
    int freq[26]={0};
    int freq1[26]={0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len1; i++)
    {
        char ch = str1[i];
        int index = ch - 'a';
        freq[index]++;
    }
    for (int i = 0; i < len2; i++)
    {
        char ch = str2[i];
        int index = ch - 'a';

            // if(freq[index] > 0)
            // {
            // freq[index]--;
            // }
            // else
            // {
                freq1[index]++;
            // }
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     cout<<freq[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < 26; i++)
    // {
    //     cout<<freq1[i]<<" ";
    // }
    // cout<<endl;
    int sum=0;
    for (int i = 0; i < 26; i++)
    {
        sum += abs(freq[i]-freq1[i]);
    }
    cout<<sum<<endl;
}