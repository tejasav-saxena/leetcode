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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
          vector<ListNode*> parts(k, nullptr);
        int length = 0;
        ListNode* curr = head;
        while (curr) {
            length++;
            curr = curr->next;
        }
        int baseSize = length / k;
        int extra = length % k;
        curr = head;
        for (int i = 0; i < k; i++) {
            if (!curr) {
                parts[i] = nullptr; 
                continue;
            }
            parts[i] = curr;
            int partSize = baseSize + (i < extra ? 1 : 0); 
            for (int j = 1; j < partSize; j++) {
                curr = curr->next;
            }
            ListNode* nextPart = curr->next;
            curr->next = nullptr;
            curr = nextPart;
        }

        return parts;
    }
};