//time complexity is order of o(n2) hence test cases are failing
// #include<iostream>
// #include<climits>
// using namespace std;
// int LIS(int *arr, int n)
// {
//     int lis[1000];
//     int len = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         lis[i] = 1;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if(arr[i] > arr[j] &&  lis[i] < lis[j] + 1)
//             {
//                 lis[i] = lis[j] +1;
//             }
//         }
        
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(len < lis[i])
//         {
//             len = lis[i];
//         }
//     }
//     return len;

// }
// int main()
// {
//     int n,arr[1000];
//     cin>>n;
//     for(int i=0; i <n ;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<LIS(arr,n);
//     return 0;
// }
/////////////////yime complexity n(logn) hence running for all casesvcx
#include<iostream>
#include<climits>
using namespace std;
int LIS(int n, int *arr)
{
    int i;
    int lis[1000];
    lis[0]=INT_MIN;
    for (i = 1; i < n; i++)
    {
        lis[i] = INT_MAX;
    }
    int lislen=0;
    for ( i = 0; i < n; i++)
    {
        int mid,low,high;
        low=0;
        high=lislen;
        while (low <= high)
        {
            mid=(low+high)/2;
            if(lis[mid] < arr[i])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
            
        }
        lis[low] = arr[i];
        if(lislen < low )
        {
            lislen=low;
        }
    }
    return lislen;
}
int main()
{
    int n,arr[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cout<<LIS(n,arr);
    return 0;
}