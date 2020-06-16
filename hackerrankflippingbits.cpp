#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    unsigned long long int a=4294967295,b;
    for(int i=0; i< n; i++)
        {
        cin>>b;
        unsigned long long int y=0;
        y = (a-b);
        cout<<y<<endl;
        }
    return 0;
}
