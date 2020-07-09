#include<iostream>
using namespace std;
void plusminus(int *arr,int n)
{
    int pos=0,neg=0,zero=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    double x= (double)pos/n;
    double y = (double)neg/n;
    double z =(double)zero/n;
    printf("%0.6f \n",x);
    printf("%0.6f \n",y);
    printf("%0.6f \n",z);
}
int main()
{
    int n,arr[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    plusminus(arr,n);
    return 0;
}