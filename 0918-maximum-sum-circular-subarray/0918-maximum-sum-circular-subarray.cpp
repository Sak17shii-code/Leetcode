class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int maxend = nums[0];
        int minend = nums[0];
        int minsum = nums[0];
        int maxsum = nums[0];
        int res = nums[0];
        int totalsum = nums[0];

        for (int i = 1; i < n; i++){
            int prevmaxend = maxend;
            int prevminend = minend;

             maxend =  max(nums[i] + prevmaxend , nums[i]);
             maxsum = max(maxsum, maxend);
             minend = min(nums[i] + prevminend , nums[i]);
             minsum = min(minsum, minend);

             totalsum = totalsum + nums[i];

            




        }
         if (maxsum < 0)
            return maxsum;
        return  res = max(maxsum, (totalsum - minsum));
        
    }
};