#include<iostream>
using namespace std;
int apple(int *arr1,int a,int l, int r,int m)
{
    int count=0;
    for(int i=0;i<m;i++)
    {
        int dist=0;
        if(arr1[i] >0)
        {
            dist = a+arr1[i];         
            {
                if (dist >= l && dist <= r)
                {
                    count++;
                }
                else
                {
                    continue;
                }
                
            }
        }
        else
        {
            continue;
        }
    }
    return count;
}
int orange(int *arr2,int b,int l, int r,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int dist=b;
        if(arr2[i])
        {
            dist = b+arr2[i];
            // cout<<dist<<" ";
            {
                if (dist >= l && dist <= r)
                {
                    count++;
                }
                else
                {
                    continue;
                }
                
            }
        }
        else
        {
            continue;
        }
        
    }
    return count;
}
int main()
{
    int l,r;
    cin>>l>>r;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int arr1[100000],arr2[100000];
    for (int i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin>>arr2[j];
    }
    cout<<apple(arr1,a,l,r,m);
    cout<<endl;
    cout<<orange(arr2,b,l,r,n);
    return 0;
}
