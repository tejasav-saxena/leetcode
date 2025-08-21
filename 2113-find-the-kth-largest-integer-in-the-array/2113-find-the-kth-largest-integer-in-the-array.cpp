class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto cmp = [](const string &a, const string &b) {
            if (a.size() != b.size()) 
                return a.size() > b.size(); 
            return a > b; // 
        };
        sort(nums.begin(), nums.end(), cmp);
        return nums[k-1];
    }
};