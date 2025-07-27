class Solution {
public:
    string clearDigits(string s) {
       stack<char> st;
    for (char ch : s) {
        if (isdigit(ch)) {
            while (!st.empty() && isdigit(st.top())) {
                st.pop();  
            }
            if (!st.empty()) {
                st.pop();  
            }
        } else {
            st.push(ch); 
        }
    }
    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;  
    }
};