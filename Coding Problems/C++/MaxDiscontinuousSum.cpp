/* Given an array of length n, find a subarray with maximum sum s..t. no two elements of that subarray are adjacent in the original array*/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr) cin>>i;
    int dp[n];
    /*Let dp[i] store the answer to the question till the position i of the array*/
    dp[0]=arr[0]; //maximum subarray with largest sum is element itself
    dp[1]=max(arr[0],arr[1]); // since both elements can't be taken (adjacent), so max of the two is taken

    /*dp[i] can be divided into two part:
    1. Subarrays which DO NOT end at arr[i]->dp[i-1]
    2. Subarrays which definitely end at a[i]->dp[i-2]+arr[i] (since when arr[i] is present, arr[i-1] is definitely not present, so the subarray without arr[i]
    is evidently the maximum subarray possible till arr[i-2] which is dp[i-2] )
      HENCE: dp[i]=dp[i-1]+dp[i-2]*/
      for(int i=2; i<n; i++)
      {
          dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
      }
      cout<<dp[n-1]<<endl;
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