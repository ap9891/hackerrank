//bekaar approach
// #include<iostream>
// using namespace std;
// void dup(char *str)
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] == str[i+1])
//         {
//             for (int j = i; str[j] != '\0'; j++)
//             str[j] = str[j+1];
//             i--;
//         }
        
//     }
    
// }
// void valley(char *str)
// {
//     int count=0;
//     dup(str);
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if(str[i]=='D' && str[i+1] == 'U' && str[i+2] =='D')
//         {
//             count++;
//         }
//     }
//     cout<<count;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     char str[n];
//     cin.get();
//     cin.getline(str,n);
//     valley(str);
//     return 0;
// }
//working for all cases
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