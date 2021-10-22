/*FInd the length of the longest increasing subsequence (LIS) from a given array*/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(auto &i:arr) cin>>i;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    int dp[n];
    
    /*If we consider dp[i] and divide it into two parts i.e.:
    1. LIS DEIFINITELY NOT containing arr[i]->dp[i-1]
    2. LIS containing arr[i] (This cannot be written as dp[i-1]+1 since we DO NOT know the last element in dp[i-1] and hence we DO NOT know 
    whether arr[i] can be concatenated to the subsequence or not)
    HENCE this method fails.
        */
    /*We tweak the definition of dp[i] s.t. it contains the LIS for the given array which ENDS AT arr[i].
    This way dp[i] can be divided into i parts:
    1. max(1,dp[0]+1,dp[1]+1,.......,dp[i-1]+1) where dp[j]+1 is considered only when arr[j]<arr[i] and 1 is taken in the case all elements
    before arr[i] are larger.
    This way to find LIS of the array, we will take the max of all dp[i] where 0<=i<n.
    */
    dp[0]=1;
    if(arr[1]>arr[0]) dp[1]=2;
    else dp[1]=1;
    int ans=1;
    for(int i=2; i<n; i++)
    {
        int temp_ans=1;
        for(int j=0; j<i; j++)
        {
            if(arr[j]<arr[i])
            {
                temp_ans=max(temp_ans,dp[j]+1);
            }
            dp[i]=temp_ans;
        }
        ans=max(ans,dp[i]);
    }
    ans=max(ans,dp[1]);
    cout<<ans<<endl;
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