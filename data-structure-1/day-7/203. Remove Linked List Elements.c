/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
        struct ListNode* temp = head,*parent = head;
        while(temp!=NULL){
            
            if(temp->val==val){
                
                if(temp==head){
                    temp = temp->next;
                    parent = temp;
                    head = temp;
                }else{
                    printf("%d ",temp->val);
                    
                    parent->next = temp->next;
                    temp = parent->next;
                }
            }else{
                parent = temp;
                temp = temp->next;
            }
        }
        return head;
}
