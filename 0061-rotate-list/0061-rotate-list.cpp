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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head ->next || k ==0) return head ;
        ListNode* curr = head;
        int len =1;
        while (curr->next)
        {
            curr = curr-> next;
            len++;
        }
        curr->next = head;
        k= k % len;
        int stepTonewhead = len - k;
        ListNode* newTail = head;
        for (int i = 1; i < stepTonewhead; i++)
         {
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};