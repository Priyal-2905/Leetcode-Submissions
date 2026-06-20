class Solution {
public:
    void solve(vector<int>& nums,int i,int target,int &count){
        if(target == 0 && i == nums.size()){
            count++;
            return;
        }
        if(i == nums.size()){
            return;
        }
        solve(nums,i+1,target-nums[i],count);
        solve(nums,i+1,target+nums[i],count);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0){return 0;}
        int count = 0;
        solve(nums,0,target,count);
        return count;
    }
};