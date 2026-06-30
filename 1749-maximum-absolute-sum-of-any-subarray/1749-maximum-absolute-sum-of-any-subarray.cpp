class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        
        int maxans = nums[0];
        int minans = nums[0];
        int maxend = nums[0];
        int minend = nums[0];
        int res = abs(nums[0]);

        for(int i = 1; i < n; i++){

            
             maxend = max(nums[i], maxend+nums[i]);
             minend=  min(nums[i], minend+nums[i]);

             maxans = max(maxans, maxend);
             minans = min(minans, minend);

            int abssum = max(abs(maxans),abs(minans));
            res = max(res,abssum);
        }
        return res;
    }
};