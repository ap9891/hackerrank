#include<iostream>
using namespace std;
int arr3[10000];
int k;
void reversearray(int *arr,int s,int e)
{
    for (int i = e; i >= s; i--)
    {
        cout<<arr[i];
    }
    
}
void sortarray(int *arr, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]> arr[i+1])
        {
            arr3[k] = i;
            k++;
        }
    }
    
    int count =0 ;
    for (int i = 1; i < k; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    for (int i = 1; i < k; i++)
    {
        if(arr3[i] > arr3[i+1] && n>2)
        {
            cout<<arr3[i]<<" "<<arr3[i+1];
            cout<<"no";
            break;
        }
        else
        {
            count++;
        }
    }
    // cout<<count;
    int s = arr3[0];
    int e = arr3[k-1];
    if(count == 1)
    {
        if(arr[s-1] < arr[s] && arr[s] <arr[s+2] && n>3)
        {
            cout<<"yes"<<endl;
            cout<<"swap"<<s<<" "<<s+1;
        }
        else if(n == 2 && arr[s] > arr[s+1])
        {
            cout<<"yes"<<endl;
            cout<<"swap"<<s<<" "<<s+1;
        }
        else if(n==1)
        {
            cout<<"no";
        }
        
    }
    else if (count != 0)
    {
        cout<<"yes"<<endl;;
        cout<<"reverse"<<s<<" "<<e;
        for (int i = 0; i <n; i++)
        {
            if(i > s && i <e)
            {
                reversearray(arr,s,e);
            }
            else
            {
                cout<<arr[i];
            }
            
        }
        
    }
    
}
int main()
{
    int n,arr[10000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sortarray(arr,n);
    return 0;
}