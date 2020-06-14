#include<iostream>
using namespace std;
int main()
{
    int max = INT_MIN;
    int start,end;
    cin>>start>>end;
    int y =0;
    for (int i = start; i <= end; i++)
    {
        for (int j = start; j <= end; j++)
        {
            y = i ^ j;
            cout<<y<<endl;
            if(y > max)
            {
                max = y;
            }
        }
    }
    cout<<max;
    return 0;
}