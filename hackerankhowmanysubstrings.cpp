#include<iostream>
#include<set>
using namespace std;
int countdistsubstrings(string str,int len)
{
    set<string> count;
    for(int i=0;i <= len;i++)
    {
        for(int j=1; j <= len-i; j++)
        {
            count.insert(str.substr(i,j));
        }
    }
    return count.size();
}
int main()
{
    int n,q;
    cin>>n>>q;
    string a[10000];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < q; j++)
    {
        int left,right;
    

        string str[10000];
        cin>>left>>right;
        int len = left-right;
        for (int k = left; k <= right; k++)
        {
            str[k] = a[k];
        }
        cout<<(countdistsubstrings(str[10000],len));
    }
    
}
