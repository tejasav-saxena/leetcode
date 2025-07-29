class Solution {
private:
    vector<int> prefixSums;
    int totalSum;
public:
    Solution(vector<int>& w) {
        totalSum = 0;
        for (int weight : w) {
            totalSum += weight;
            prefixSums.push_back(totalSum);
        }
    }
    int pickIndex() {
        int target = rand() % totalSum + 1; 
        int left = 0, right = prefixSums.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;
            if (prefixSums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */