class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

        while (true) {
            bool changed = false;
            int n = nums.size();
            for (int i = 0; i < n - 1; ++i) {
            if (nums[i] > nums[i + 1]) {
            int minSum = INT_MAX;
            int minIndex = -1;
            for (int j = 0; j < n - 1; ++j) {
            int pairSum = nums[j] + nums[j + 1];
            if (pairSum < minSum) {
            minSum = pairSum;
            minIndex = j;
            }
            }
            vector<int> newNums;
        for (int j = 0; j < n; ++j) {
            if (j == minIndex) {
            newNums.push_back(nums[j] + nums[j + 1]);
            ++j; 
            } else {
               newNums.push_back(nums[j]);
                }
                    }
                    nums = newNums;
                    ++operations;
                    changed = true;
                    break; 
                }
            }
            if (!changed) break; 
        }
        return operations;
    }
};