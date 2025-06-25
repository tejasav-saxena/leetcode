/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head)
     {
       vector<int> values;
        for (ListNode* curr = head; curr != nullptr; curr = curr->next)
        {
            values.push_back(curr->val);
        }
        int n = values.size();
        vector<int> result(n, 0);
        stack<int> st; 
        for (int i = 0; i < n; ++i)
        {
            while (!st.empty() && values[i] > values[st.top()])
            {
                result[st.top()] = values[i];
                st.pop();
            }
            st.push(i);
        }
        return result; 
    }
};