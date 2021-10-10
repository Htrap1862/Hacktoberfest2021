#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void solve(vector<int>q,int n){
    vector<int>ans;
    stack<int>st;
    for (int i = 0; i < n; i++)
    {   
        if (st.empty())
        {
            ans.push_back(-1);
        }
        else if (!st.empty() && q[i]>st.top())
        {
            ans.push_back(st.top());
        }
        else if (!st.empty() && q[i]<=st.top())     
        {
            while (!st.empty() && q[i]<=st.top())
            {
                st.pop();
            }
            if (st.empty())
            {
                ans.push_back(-1);
            }
            else if (q[i]>st.top())
            {
                ans.push_back(st.top());
            }
            
        }
        st.push(q[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
       cout<<ans[i]<<" ";
    }



}
int main(){
    vector<int>q;
    int n,k;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>k;
        q.push_back(k);
    }
    solve(q,n);



    return 0;
}
