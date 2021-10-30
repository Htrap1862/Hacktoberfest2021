class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        string ans="";
        for(int i=0;i<n;i++){
            nums.push_back(i+1);
        }
        
        vector<int> fact;
        fact.push_back(1);
        fact.push_back(2);
        fact.push_back(6);
        fact.push_back(24);
        fact.push_back(120);
        fact.push_back(720);
        fact.push_back(5040);
        fact.push_back(40320);
        
        int index=0;
        
        while(n!=1){
            index=k/(fact[n-2]);
            if(k%fact[n-2]==0){
                index--;
            }
            
            ans+=(char)(nums[index]+'0');
            auto itr=nums.begin()+index;
            nums.erase(itr);
            
            k-=fact[n-2]*index;
            n--;
            
        }
        
        ans+=(char)(nums[0]+'0');
         
        return ans;
    }
};
