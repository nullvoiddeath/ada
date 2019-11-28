#include<bits/stdc++.h>
using namespace std;

void Partition(int arr[], int n){
    int sum=0;
    int i,j;
    for(int i=0; i<n;i++)
        sum+=arr[i];
    if(sum%2 != 0)
        {
            cout<<"Nah";
            return;
        }
    bool part[sum/2+1][n+1];
    for(int i=0; i<=n; i++)
        part[0][i] = true;
    for(int i=1; i<= sum/2; i++)
        part[i][0] = false;
    for(i = 1; i<=sum/2; i++)
    {
        for(j = 1; j<=n;j++)
            {
                part[i][j] = part[i][j-1];
                if( i >= arr[j-1])
                    part[i][j] =  part[i][j] || part[i -arr[j-1]][j-1];
            }
    }
    cout<<"Result: "<<part[sum/2][n];

}
int main() 
{ 
    int *arr, n;
    cout<<"Enter the number of elements :";
    cin>>n;
    arr = new int[n];
    cout<<"Enter elements :";
    for(int i =0; i<n; i++)
        cin>>arr[i];
    Partition(arr, n);
    return 0;
}