#include<bits/stdc++.h>
using namespace std;
int c[100][100], n;

void Dijk(int src){
    int dist[100], vis[100], u;
    for(int i=1; i<=n; i++){
        dist[i] = c[src][i];
        vis[i] = 0;
    }
    vis[src] = 1;
    dist[src] = 0;
    int count = 1;
    while(count != n){
        int min = INT_MAX;
        for(int i =1; i<=n; i++){
            if(dist[i] < min && !vis[i])
                {
                    min = dist[i];
                    u = i;
                }
        }
        vis[u] = 1;
        count++;
        for(int i =1; i<=n; i++){
            if(min+c[u][i] < dist[i] && !vis[i])
                dist[i] = min + c[u][i];
        }

    }
    for(int i =1; i<=n;i++)
        cout<<src+1<<":"<<dist[i];

}