#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int adj[n+1][m+1];

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin>>a>>b;

        adj[a][b]=1;
        adj[b][a]=1;
    }
    

    return 0;
}