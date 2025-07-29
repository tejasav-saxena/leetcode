class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
            bool covered[51] = {false};
        for (const auto& range : ranges) {
            int start = range[0];
            int end = range[1];
            for (int i = start; i <= end; ++i) {
                covered[i] = true;
            }
        }
        for (int i = left; i <= right; ++i) {
            if (!covered[i]) {
                return false;
            }
        }
        return true; 
    }
};