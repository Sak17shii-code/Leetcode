class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int res = arr[0];
        int nodel = arr[0];
        int onedel = INT_MIN;
        int n = arr.size();

        for(int i = 1; i < n; i++){

            int prevnodel = nodel;
            int prevonedel = onedel;
            nodel = max(nodel+arr[i],arr[i]);
        if (prevonedel == INT_MIN)
            onedel = prevnodel;
        else
            onedel = max(prevnodel, prevonedel + arr[i]);
            res = max(res,max(nodel,onedel));
            
        }
        return res;
        
    }
};