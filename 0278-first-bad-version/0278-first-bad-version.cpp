// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
              int left = 1, right = n, ans = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                ans = mid;       
                right = mid - 1;  
            } else {
                left = mid + 1;   
            }
        }
        return ans;
    }
};