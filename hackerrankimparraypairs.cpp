#include<iostream>
#include<algorithm>
using namespace std;
long long int arraypair(long long int *arr,long long  int n)
{
    long long int count =1;
    sort(arr,arr+n);
      int max = arr[n-1];
    for (long long int i = 0; i < n-1; i++)
    {
        long long int s=i+1;
        long long int e=n-1;
        while (s < e)
        {
            if(arr[s]*arr[e] <= max){
                count++;
                s++;
                e--;
                cout<<s<<" "<<e<<endl;
            }
            else if(arr[s]*arr[e] < max)
            {  count++;

                s++;
            }
              
            else
            {
                e--;
            }
            
        }
        
    }
    return count;
}
int main()
{
    long long int n;
    long long int arr[100000];
    cin>>n;
    for (long long int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<arraypair(arr,n);
    return 0;
}