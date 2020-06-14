#include<iostream>
using namespace std;
void diagdiff(int mat[][100],int n)
{
    int suml=0,sumr=0;
    //left diagonal
    for (int i = 0; i < n; i++)
    {
        suml+= mat[i][i];
    }
    //right diagonal
    int j=n-1;
    for (int i = 0; i < n; i++)
    {
        sumr+= mat[i][j--];
    }
    int y = abs(suml-sumr);
    cout<<y;
}
int main()
{
    int n,mat[100][100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
    }
    diagdiff(mat,n);
    return 0;
}