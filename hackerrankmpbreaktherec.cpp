#include<iostream>
using namespace std;
void fact(int *arr ,int n)
{
    int count1=0,count2=0;
    int max,min;
        max=arr[0];
        min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max= arr[i];
            count1++;
        }
        else if (arr[i]<min)
        {
            min=arr[i];
            count2++;
        }

    }

    cout<<count1<<" "<<count2;
}
int main()
{
    int n,arr[1000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    fact(arr,n);
    return 0;
}