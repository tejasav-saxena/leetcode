class Solution {
public:
    bool repeatedSubstringPattern(string s) {
          string doubled = s + s;
    string trimmed = doubled.substr(1, doubled.length() - 2);
    return trimmed.find(s) != string::npos;
    }
};