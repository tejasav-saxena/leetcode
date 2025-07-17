class Solution {
public:
    string simplifyPath(string path) {
       std::vector<std::string> stack;
    std::stringstream ss(path);
    std::string token;
    while (std::getline(ss, token, '/')) {
        if (token.empty() || token == ".") {
            continue;
        } else if (token == "..") {
            if (!stack.empty()) {
                stack.pop_back(); 
            }
        } else {
            stack.push_back(token); 
        }
    }
    std::string result = "/";
    for (size_t i = 0; i < stack.size(); ++i) {
        result += stack[i];
        if (i != stack.size() - 1) {
            result += "/";
        }
    }
    return result; 
    }
};