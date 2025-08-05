class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
           unordered_map<int, int> rank;
        for (int i = 0; i < arr2.size(); ++i) {
            rank[arr2[i]] = i;
        }
        auto compare = [&](int a, int b) {
            if (rank.count(a) && rank.count(b)) {
                return rank[a] < rank[b]; 
            } else if (rank.count(a)) {
                return true; 
            } else if (rank.count(b)) {
                return false; 
            } else {
                return a < b; 
            }
        };
        sort(arr1.begin(), arr1.end(), compare);
        return arr1;
    }
};