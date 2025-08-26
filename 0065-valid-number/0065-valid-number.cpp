class Solution {
public:
    bool isNumber(string s) {
          int n = s.size();
        int i = 0, j = n - 1;
        while (i <= j && s[i] == ' ') i++;
        while (j >= i && s[j] == ' ') j--;
        if (i > j) return false;
        s = s.substr(i, j - i + 1);

        bool seenDigit = false;
        bool seenDot = false;
        bool seenExp = false;

        for (int k = 0; k < s.size(); k++) {
            char c = s[k];

            if (isdigit(c)) {
                seenDigit = true;
            }
            else if (c == '+' || c == '-') {
                if (k > 0 && !(s[k-1] == 'e' || s[k-1] == 'E')) 
                    return false;
            }
            else if (c == '.') {
                if (seenDot || seenExp) return false;
                seenDot = true;
            }
            else if (c == 'e' || c == 'E') {
                if (seenExp || !seenDigit) return false;
                seenExp = true;
                seenDigit = false; 
            }
            else {
                return false; 
            }
        }
        return seenDigit;
    }
};