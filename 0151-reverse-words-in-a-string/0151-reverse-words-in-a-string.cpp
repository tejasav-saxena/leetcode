class Solution {
public:
    string reverseWords(string s) {
            istringstream iss(s);
    vector<string> words;
    string word;
    while (iss >> word) {
        words.push_back(word);
    }
    reverse(words.begin(), words.end());
    string result;
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }
    return result;
    }
};