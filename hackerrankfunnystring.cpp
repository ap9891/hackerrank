// // #include<iostream>
// #include<bits/stdc++.h>
// #include<string.h>
// using namespace std;
// void reverse(char *str1)
// {
//     int e = strlen(str1)-1;
//     int s=0;
//     int ch;
//     while(str1[s]< str1[e])
//     {
//         swap(str1[s],str1[e]);
//         s++;
//         e--;
//     }

// }
// int main()
// {
//     int t;
//     char str1[10000];
//     int d1[10000]={0},d2[10000]={0};
//     int k;
//     cin.getline(str1,10000);
//     int len1 = strlen(str1);
//     for (int i = 0; i < len1-1; i++)
//     {
//         d1[i] = abs(str1[i] - str1[i+1]);
//         // k++;
//     }
//     for (int i = 0; i < len1-1; i++)
//     {
//         cout<<d1[i]<<" ";
//     }
//     cout<<endl;
//     reverse(str1);
//     // reverse(str1.begin(),str1.end());
//     // char str2[10000];
//     for (int i = 0; i < len1; i++)
//     {
//         cout<<str1[i]<<" ";
//     }
//     cout<<endl;
//     for (int i = 0; i < len1-1; i++)
//     {
//         d2[i] = abs(str1[i] - str1[i+1]);
//     }
//     for (int i = 0; i < len1-1; i++)
//     {
//         cout<<d2[i]<<" ";
//     }
//     cout<<endl;
//     int i;
//     for ( i = 0; i < len1-1; i++)
//     {
//         if(d1[i] != d2[i])
//         {
//             cout<<"NOT FUNNY"<<endl;
//             break;
//         }
//     }
//     if(i == len1-1)
//     {
//         cout<<"FUNNY"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string str1;
    int d1[10000]={0},d2[10000]={0};
    int k;
    cin>>str1;
    int len1 = str1.length();
    for (int i = 0; i < len1-1; i++)
    {
        d1[i] = abs(str1[i] - str1[i+1]);
    }
    // for (int i = 0; i < len1-1; i++)
    // {
    //     cout<<d1[i]<<" ";
    // }
    // cout<<endl;
    reverse(str1.begin(),str1.end());
    // for (int i = 0; i < len1; i++)
    // {
    //     cout<<str1[i]<<" ";
    // }
    // cout<<endl;
    for (int i = 0; i < len1-1; i++)
    {
        d2[i] = abs(str1[i] - str1[i+1]);
    }
    // for (int i = 0; i < len1-1; i++)
    // {
    //     cout<<d2[i]<<" ";
    // }
    // cout<<endl;
    int i;
    for ( i = 0; i < len1-1; i++)
    {
        if(d1[i] != d2[i])
        {
            cout<<"NOT FUNNY"<<endl;
            break;
        }
    }
    if(i == len1-1)
    {
        cout<<"FUNNY"<<endl;
    }
    }
    return 0;
}