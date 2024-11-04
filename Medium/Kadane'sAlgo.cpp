//LC 53
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=0, maxSum=INT_MIN;

        for(int val:nums){
            cur+=val;
            maxSum=max(cur,maxSum);
            if(cur<0){
                cur=0;
            }
        }
        return maxSum;
    }
};