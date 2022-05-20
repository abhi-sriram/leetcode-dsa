/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct ListNode *prev = NULL,*temp = head;
    while(head!=NULL){
        
        if(prev==NULL){
            printf("%d ",head->val);
            prev = head;
            head = head->next;
        }else{
            
            if(prev->val==head->val){
                printf("%d ",head->val);
                prev->next = head->next;
                head = prev->next;
            }else{
                prev = head;
                head = head->next;
            }
        }
    }
    return temp;
}
