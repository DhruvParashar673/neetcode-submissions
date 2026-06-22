class Solution {
public:
int n;
vector<vector<int>>res;

void solve(vector<int>&nums,int i,vector<int>temp){
    if(i>=n){
        res.push_back(temp);
        return;
    }

    temp.push_back(nums[i]);
    solve(nums,i+1,temp);
    temp.pop_back();

    while(i+1<n && nums[i]==nums[i+1]){
        i++;
    }

    solve(nums,i+1,temp);
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
n=nums.size();

sort(nums.begin(),nums.end());
vector<int>temp;
solve(nums,0,temp);

return res;
        
    }
};
