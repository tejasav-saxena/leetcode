class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        vector<string> result;
        string current;
        vector<string> phoneMap = {"",    "",    "abc",  "def", "ghi",
                                   "jkl", "mno", "pqrs", "tuv", "wxyz"};

        backtrack(digits, 0, phoneMap, current, result);
        return result;
    }

private:
    void backtrack(const string& digits, int index,
                   const vector<string>& phoneMap, string& current,
                   vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        string letters = phoneMap[digits[index] - '0'];
        for (char letter : letters) {
            current.push_back(letter);
            backtrack(digits, index + 1, phoneMap, current, result);
            current.pop_back();
        }
    }
};