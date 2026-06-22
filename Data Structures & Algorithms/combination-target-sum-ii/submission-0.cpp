class Solution {
public:
int n;
vector<vector<int>>res;
void solve(vector<int>&nums,int target,int i,int sum,vector<int>&temp){
    if(sum==target){
        res.push_back(temp);
        return;
    }
    if(i>=n || sum>target){
        return;
    }

    temp.push_back(nums[i]);
    solve(nums,target,i+1,sum+nums[i],temp);
    temp.pop_back();

    while(i <= n-2 && nums[i]==nums[i+1]){
        i++;
    }

    solve(nums,target,i+1,sum,temp);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
n=candidates.size();

sort(candidates.begin(),candidates.end());
vector<int>temp;
solve(candidates,target,0,0,temp);

return res;
        
    }
};