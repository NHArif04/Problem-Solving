class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *remove = head, *last = head; 
        for(int i=0; i<n; i++) last = last->next;
        if(!last) return head->next;
        while(last->next) remove= remove->next, last= last->next;
        remove->next = remove->next->next;
        return head;
    }
};