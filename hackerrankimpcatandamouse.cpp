#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    int arr[4];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    int x= abs(arr[0]-arr[2]);
    
    int y=abs(arr[1]-arr[2]);
    
    if (x<y)
    {
        cout<<"Cat A"<<endl;
    }
    else if(x>y)
    {
        cout<<"Cat B"<<endl;
    }
    else
    {
        cout<<"Mouse C"<<endl;
    }
    }
    return 0;
}