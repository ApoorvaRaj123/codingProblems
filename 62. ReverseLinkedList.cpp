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


// Recursive Solution 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseList(head -> next);
        ListNode* front = head -> next;
        front -> next = head;
        head -> next = nullptr;
        return newHead;
    }
};
