// // problem in showing custoer id
// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool comparator(pair<int,int> a, pair<int,int> b)
// {
//     return a.first < b.first;
// } 
// int main()
// {
//     int n;
//     cin>>n;
//     int custno[1001];
//     int order,prep;
//     pair<int,int> arr[1001];
//     for (int i = 1; i <= n; i++)
//     {
//         cin>>order;
//         cin>>prep;
//         int y = order+prep;
//         arr[i].first = y;
//         arr[i].second = i; 
//     }
//     sort(arr,arr+n);
//     for (int j = 1; j <= n; j++)
//     {
//         cout<<arr[j].first<<endl;
//         cout<<arr[j].second<<endl;;
//     }
//     return 0;
// }
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    multimap<int,int> m;
    int n;
    cin>>n;
    int order,prep;
    for (int i = 1; i <= n; i++)
    {
        cin>>order>>prep;
        m.insert(make_pair((order+prep),i));
    }
    for (auto node : m)
    {
        cout<<node.second<<" ";
    }
 
    return 0;
    
}