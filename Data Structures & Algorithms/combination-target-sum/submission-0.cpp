class Solution {
public:
int n;
vector<vector<int>>res;

void solve(vector<int>&nums,int target,int i,vector<int>temp,int sum){
if(sum==target){
    res.push_back(temp);
    return;
}

if(i>=n || sum > target){
    return;
}
//include
temp.push_back(nums[i]);
solve(nums,target,i,temp,sum+nums[i]);
temp.pop_back();

//exclude
solve(nums,target,i+1,temp,sum);



}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
n=nums.size();

vector<int>temp;

solve(nums,target,0,temp,0);

return res;
        
    }
};
