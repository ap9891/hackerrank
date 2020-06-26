#include<iostream>
#include<string.h>
using namespace std;
int area(int * arr, char * str)
{
    int len = strlen(str);
    int max = INT_MIN;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        int index = ch - 'a';
        if (arr[index] >  max)
        {
            max =arr[index];
        }
    }
    return max*len;
}
int main()
{
    int arr[26];
    char str[100];
    for (int i = 0; i <26; i++)
    {
        cin>>arr[i];
    }
    cin.get();
    cin.getline(str,100);
    cout<<area(arr,str);
    return 0;
}