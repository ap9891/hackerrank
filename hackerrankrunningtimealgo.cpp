#include<iostream>
using namespace std;
void insertsort(int *arr, int n)
{
    int count =0 ;
    for (int i = 0; i < n; i++)
    {
        
        int min = arr[i];
        int j = i-1;
        while(j >=0 && arr[j] > min)
        {
            arr[j+1]= arr[j];
            j=j-1;
            count++;
        }
        arr[j+1] = min;
    }
    cout<<count;
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