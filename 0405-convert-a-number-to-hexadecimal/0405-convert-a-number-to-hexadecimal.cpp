class Solution {
public:
    string toHex(int num) {
                if (num == 0) return "0";
        unsigned int n = num;  
        string hexChars = "0123456789abcdef";
        string result;
        while (n != 0) {
            int last4bits = n & 0xf;
            result += hexChars[last4bits];
            n >>= 4;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};