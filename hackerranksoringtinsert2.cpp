#include<iostream>
using namespace std;
void insertsort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(i>1){
        for (int k = 0; k < n; k++)
        {
            cout<<arr[k]<<" ";
        }
        
        cout<<endl;
        }
        int min= arr[i];
        int j= i-1;
        while(j >=0 && arr[j] > min)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = min;
        
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<' ';
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
    insertsort(arr,n);
    return 0;
    
}