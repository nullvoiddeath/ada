#include<bits/stdc++.h>
using namespace std;
int M[100][100], vis[100], n;
void Prims(){
    int ne = 0;
    int mincost = 0;
    int u,v,min;
    for(int i =1; i<=n;i++)
        vis[i] = 0;
    vis[1] = 1;
    while( ne != n-1)
    {
        min = INT_MAX;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                if(vis[i] == 1)
                    if(M[i][j] < min){
                        min = M[i][j];
                        u = i;
                        v = j;
                    }
        if(vis[v] != 1)
        {
            vis[v] = 1;
            ne++;
            mincost += min;
        }
        M[u][v] = INT_MAX;
        M[v][u] = INT_MAX;
    }
    cout<<"Minimum cost: "<<mincost<<endl;
}