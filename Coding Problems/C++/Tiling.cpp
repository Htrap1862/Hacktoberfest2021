/*There is a floor of dimension 2XN and you have two types of tiles of dimension 2X1 and 1X2, find out the number of ways in which the floor can
be tiled*/
#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    int dp[n+1];
    // Let dp[i] denote the no. of ways to tile a floor of dimension 2Xi
    dp[1]=1; //one tile of dimension 2X1
    dp[2]=2; //two tiles of dimension 1X2
    /*The ith column can be tiled in two ways:
    1. Using 2X1 tile->dp[i-1] (since if 2X1 tile is used that means tiling till (i-1)th column is complete)
    2. Using 1X2 tile->dp[i-2] (since if 1X2 tile is used that means tiling till (i-2)th colum is complete)
    HENCE dp[i]=dp[i-1]+dp[i-2]
    */
   for(int i=3; i<=n; i++)
   {
       dp[i]=dp[i-1]+dp[i-2];
   }
   cout<<dp[n]<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}