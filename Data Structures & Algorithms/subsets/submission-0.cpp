class Solution {
public:
vector<vector<int>>res;    
int n;
void solve(vector<int>&nums,int n,int i,vector<int>&temp,vector<vector<int>>&res){
    if(i>=n){
        res.push_back(temp);
        return;
    }

//include
    temp.push_back(nums[i]);
    solve(nums,n,i+1,temp,res);
    temp.pop_back();

//exclude
   solve(nums,n,i+1,temp,res);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        n=nums.size();
        vector<vector<int>>res;
        vector<int>temp;
        



        solve(nums,n,0,temp,res);

        return res;
    }
};
