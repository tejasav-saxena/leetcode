class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> prefixMap;
        prefixMap[0] = -1; 
        int maxLen = 0;
        int prefixSum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += (nums[i] == 0 ? -1 : 1);
            if (prefixMap.find(prefixSum) != prefixMap.end()) {
                maxLen = max(maxLen, i - prefixMap[prefixSum]);
            } else {
                prefixMap[prefixSum] = i;
            }
        }
        return maxLen;
    }
};