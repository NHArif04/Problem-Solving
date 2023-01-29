class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode *unique = head;

        while(unique != nullptr && unique-> next !=nullptr )
        {
            if(unique -> val == unique -> next -> val)
                unique -> next = unique -> next -> next;
            else 
                unique= unique->next;
        }
        return head;
    }
};