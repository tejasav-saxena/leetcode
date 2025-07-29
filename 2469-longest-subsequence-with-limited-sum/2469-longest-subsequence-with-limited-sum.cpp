class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> prefixSum(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
        vector<int> answer;
        for (int q : queries) {
            int left = 0, right = nums.size();
            while (left < right) {
                int mid = (left + right + 1) / 2;
                if (prefixSum[mid] <= q)
                    left = mid;
                else
                    right = mid - 1;
            }
            answer.push_back(left);
        }
        return answer;
    }
};