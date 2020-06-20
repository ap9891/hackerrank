#include<iostream>
using namespace std;
bool fact(int *arr1, int *arr2, int num,int n1, int n2)
{
    int i;
    for (i = 0; i < n1; i++)
    {
        if(num%arr1[i] != 0)
        {
            return false;
        }
    }
    if(i == n1)
    {
        for (int j = 0; j < n2; j++)
        {
            if(arr2[j]%num != 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n1,n2,arr1[100],arr2[100];
    cin>>n1>>n2;
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n2; i++)
   {
       cin>>arr2[i];
   } 
   int count =0 ;
   for (int k = arr1[0]; k <= arr2[0]; k++)
   {
       if(fact(arr1,arr2,k,n1,n2))
       {
           count++;
       }
   }
   cout<<count;
   return 0;
}