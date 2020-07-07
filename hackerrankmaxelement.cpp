#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    stack<int> s;
    // vector<int> v;
    int t;
    cin>>t;
    while (t--)
    {
        int data;
        int q;
        cin>>q;
        if(q==1)
        {
            cin>>data;
            if(s.empty())
            {
            s.push(data);
            }
            else
            {
                s.push(max(data,s.top()));
            }
            
            // v.push_back(data);
        }
        else if(q==2)
        {
            if(!s.empty())
            {
            s.pop();
            }
            // v.pop_back();
        }
        else if(q==3)
        {
            // sort(v.begin(),v.end());
            // cout<<v[v.size()-1]<<endl;
            cout<<s.top()<<endl;
        }
        
    }
    return 0;
}