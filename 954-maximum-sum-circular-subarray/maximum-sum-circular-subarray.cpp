class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int bestending = nums[0], ans = nums[0];
        int minending = nums[0], minans = nums[0];
        int total = nums[0];
        for(int i = 1; i < n ; i++){
            total += nums[i];

            int v1 = bestending + nums[i];
            int v2 = nums[i];
            bestending = max( v1 , v2);
            ans = max(bestending , ans);
            int v3 = minending + nums[i];
            int v4 = nums[i];
            minending = min(v3 , v4);
            minans = min(minending , minans);   
        }
        if(ans < 0){
            return ans ;
        }
        return max(ans , total - minans);
    }
};