class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)  return head;
        ListNode* curr = head->next;
        head->next = nullptr;
        while(head != nullptr && curr != nullptr){
            ListNode* temp = curr->next;
            curr->next = head;
            head = curr;
            curr = temp;
        }
        return head;   
    }
};