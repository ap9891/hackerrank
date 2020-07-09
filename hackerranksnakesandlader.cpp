#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
#include<climits>
#include<climits>
using namespace std;
class graph
{
    public:
    unordered_map <int,list<int> > h;
    void addedge(int u, int v, bool bidir = true)
    {
        h[u].push_back(v);
        if(bidir)
        {
            h[v].push_back(u);
        }
    }
    int SSSP(int src, int des)
    {
        unordered_map<int, int> dist;
        unordered_map<int,int> parent_map;
        for(auto node : h)
        {
            dist[node.first] = INT_MAX;
        } 
        dist[src] = 0;
        parent_map[src] = src;
        queue<int> q;
        q.push(src);
        while (!q.empty())
        {
            int parent = q.front();
            q.pop();
            int parent_dist = dist[parent];
            for(auto children : h[parent])
            {
                if(dist[children] == INT_MAX)
                {
                    parent_map[children] = parent;
                    dist[children] = 1+parent_dist;
                    q.push(children);
                }
            }

        }
        return dist[des];
        
    }
};
int main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
    graph g;
    
        int board[1000]={0};

        int n=100,l,s;
        cin>>l;
        int data1;
        int data2;
        for (int i = 0; i < l; i++)
        {
        
            cin>>data1>>data2;
            board[data1]= data2-data1;
        }
        cin>>s;
        int data3;
        int data4;
        for (int j = 0; j < s; j++)
        {
            cin>>data3>>data4;
            board[data3] = data4-data3;
        }
        for (int u = 0; u <= n; u++)
        {
            for (int dice = 1; dice <= 6; dice++)
            {
                int v = dice + u + board[u+dice];
            
                g.addedge(u,v,false);
            }
        }
        

        
        int y=0;
        if(l==s)
        {
         y=g.SSSP(1,n);
        }
        else{
         y= g.SSSP(0,n);
        }
        if(y == INT_MAX)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<y<<endl;
        }
        
        
    }
    return 0;
}
