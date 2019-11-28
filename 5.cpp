#include<bits/stdc++.h>
using namespace std;

int minCoin(int Val[], int n, int total)
{
    int change[total+1];
    change[0] = 0;
    int i,j;
    for(j=1;j<=total;j++)
    {
        int min = INT_MAX;
        for(i=0;i<n;i++)
        {
            if(j>=Val[i] && (change[j - Val[i]] + 1) < min)
                min = change[j-Val[i]] + 1;
        }
        change[j] = min;
    }
    return change[total];
}

int main()
{
    int total;
    cout<<"Enter total amount: ";
    cin>>total;
    int Val[] = {1,2,5,10};
    int min = minCoin(Val, sizeof(Val)/sizeof(Val[0]), total);
    cout<<"Min coins: "<<min<<endl;
    return 0;
}