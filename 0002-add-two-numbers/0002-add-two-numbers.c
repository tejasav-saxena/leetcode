/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* add(struct ListNode* l1, struct ListNode* l2, int carry) {
    if (!l1 && !l2 && carry == 0) {
        return NULL; 
    }

    int v1 = 0, v2 = 0;

    if (l1) {
        v1 = l1->val; 
    }
    if (l2) {
        v2 = l2->val; 
    }

    int sum = v1 + v2 + carry; 
    int newCarry = sum / 10;   
    int nodeValue = sum % 10;  
 
    struct ListNode* currentNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    currentNode->val = nodeValue;
        currentNode->next = add(
        (l1 ? l1->next : NULL), 
        (l2 ? l2->next : NULL), 
        newCarry
    );

    return currentNode;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    return add(l1, l2, 0);
}