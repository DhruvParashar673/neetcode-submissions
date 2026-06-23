class Solution {
public:
int n;
vector<vector<int>>res;


void solve(vector<int>&nums,vector<int>&temp,vector<int>&used){
     if(temp.size()>=n){
        res.push_back(temp);
        return;
    }

    for(int i=0;i<n;i++){
        if(used[i]==1) continue;

        used[i]=1;
        temp.push_back(nums[i]);
        solve(nums,temp,used);
        temp.pop_back();
        used[i]=0;
        
   
    
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
   n=nums.size();
     vector<int>temp;
     vector<int>used(n,0);

     solve(nums,temp,used);

     return res; 

    }
};
