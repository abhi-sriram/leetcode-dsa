/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* next,*prev = NULL,*temp;
    if(head==NULL || head->next==NULL){
        return head;
    }
    next = head->next;
    while(next!=NULL){
        head->next = prev;
        temp = next->next;
        next->next = head;
        prev = head;
        head = next;
        next = temp;
       
    }
    return head;
}
