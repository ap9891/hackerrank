#include<iostream>
using namespace std;
int main()
{
    int n,m,arr1[100001],arr2[100001];
    cin>>n;
    int freq1[10001]={0},freq2[10001]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        int index = arr1[i];
        freq1[index]++;
    }
    for (int i = 0; i < m; i++)
    {
        int index = arr2[i];
        freq2[index]++;
    }
    for (int i = 0; i <10001; i++)
    {
        if(abs(freq1[i]-freq2[i])>0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}