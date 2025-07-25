class Solution {
public:
    int minStartValue(vector<int>& nums) {
           int sum = 0;
        int minPrefixSum = 0;
        for (int num : nums) {
            sum += num;
            minPrefixSum = min(minPrefixSum, sum);
        }
        return 1 - minPrefixSum;
    }
};