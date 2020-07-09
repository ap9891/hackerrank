
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int data;
    long long sum =0;
    for (int i = 0; i < 5; i++)
    {
        cin>>data;
        sum+=data;
        v.push_back(data);
    }
    sort(v.begin(),v.end());
    cout<<sum - v[4]<<" "<<sum-v[0];
    return 0;
}