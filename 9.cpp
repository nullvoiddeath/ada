#include<bits/stdc++.h>
using namespace std;
int arr[100][100], n;
void Floyd(){
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n;j++)
                arr[i][j] =  min(arr[i][j], arr[i][k] + arr[k][j]);

    for(int i=1; i<=n ;i++)
        for(int j=1; j<=n ; j++)
            cout<<arr[i][j];
}