#include<bits/stdc++.h>
#include<vector>
#include<iomanip>
#include<queue>
using namespace std;

vector<double> findmedian(vector<int> v)
{
    vector<double> ans;
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int> > minheap;
    double median = 0;
    for(int i=0; i< v.size(); i++)
    {
        if(v[i] <= median)
        {
            maxheap.push(v[i]);
        }
        else
        {
            minheap.push(v[i]);
        }
        if(minheap.size() > maxheap.size() + 1)
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
        if(maxheap.size() > minheap.size() + 1)
        {
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        if(minheap.size() == maxheap.size())
        {
            median = (maxheap.top() + minheap.top())/2.0;
        }
        else if(minheap.size() > maxheap.size())
        {
            median =(double)minheap.top();
        }
        else
        {
            median = (double)maxheap.top();
        }
        ans.push_back(median);
    }
    return ans;
}
int main()
{
    vector<int> v;

    int n,data;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>data;
        v.push_back(data);   
    }
       std::cout << std::setprecision(1) << std::fixed;
    vector<double> a=findmedian(v);
    for(int i=0; i< a.size();i++)
    {
        std::cout<<a[i]<<std::endl;
        
    }
    return 0;
}
