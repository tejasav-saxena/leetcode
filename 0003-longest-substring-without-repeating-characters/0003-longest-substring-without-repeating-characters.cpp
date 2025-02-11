class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char, int> char_index_map;
                       int left = 0; 
        int max_length = 0; 
                      for (int right = 0; right < s.size(); ++right) {
            char current_char = s[right];
            
           
            if (char_index_map.find(current_char) != char_index_map.end() && char_index_map[current_char] >= left) {
                
                left = char_index_map[current_char] + 1;
            }
     char_index_map[current_char] = right;     
      max_length = max(max_length, right - left + 1);
        }
        
        return max_length;
    }
};