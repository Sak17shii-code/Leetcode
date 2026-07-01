class Solution {
public:
    int maximumSum(vector<int>& arr) {
        
        int res = arr[0];
        int nodel = arr[0];
        int onedel = 0;
        int n = arr.size();

        for(int i = 1; i < n; i++){
            int prevnodel = nodel;
            int prevonedel = onedel;

            nodel = max(prevnodel + arr[i], arr[i]);
            onedel = max(prevnodel , prevonedel + arr[i]);

            res = max(res, max(nodel, onedel));

        }
        return res;

        
    }
};