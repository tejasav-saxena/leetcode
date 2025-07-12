class Solution {
public:
    int characterReplacement(string s, int k) {
         vector<int> count(26, 0);
    int left = 0, max_count = 0, max_len = 0;
    for (int right = 0; right < s.size(); ++right) {
        count[s[right] - 'A']++;
        max_count = max(max_count, count[s[right] - 'A']);
        int window_size = right - left + 1;
        if (window_size - max_count > k) {
            count[s[left] - 'A']--;
            left++;
        }
        max_len = max(max_len, right - left + 1);
    }
    return max_len;
}
};