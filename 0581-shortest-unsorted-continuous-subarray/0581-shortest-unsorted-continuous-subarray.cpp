class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
          int n = nums.size();
    int start = -1, end = -2; 
    int minVal = nums[n - 1];
    int maxVal = nums[0];
    for (int i = 1; i < n; ++i) {
        maxVal = max(maxVal, nums[i]);
        if (nums[i] < maxVal) {
            end = i;
        }
    }
    for (int i = n - 2; i >= 0; --i) {
        minVal = min(minVal, nums[i]);
        if (nums[i] > minVal) {
            start = i;
        }
    }
    return end - start + 1;
    }
};