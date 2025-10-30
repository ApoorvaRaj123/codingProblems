class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* current = head;

        while(current != NULL){
            current = current->next;
            temp->next = prev;
            prev = temp;
            temp = current;
        }
        head->next = NULL;
        return prev;
    }
};
