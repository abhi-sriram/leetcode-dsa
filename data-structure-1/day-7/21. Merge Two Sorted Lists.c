/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include<stdio.h>
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* list=NULL,*headList;
    while(list1!=NULL && list2!=NULL ){
        struct ListNode* temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        
        if(list1->val<list2->val){
            temp->val = list1->val;
            list1 = list1->next;
           
        }else{
            temp->val = list2->val;
            list2 = list2->next;
            
        }
        temp->next = NULL;
        if(list==NULL){
            list = temp;
            headList = temp;
        }else{
            list->next = temp;
            list = temp;
        }
    }
    while(list1!=NULL){
        struct ListNode* temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val = list1->val;
        list1 = list1->next;
        temp->next = NULL;
        if(list==NULL){
            list = temp;
            headList = temp;
        }else{
            list->next = temp;
            list = temp;
        }
    }
    while(list2!=NULL){
        struct ListNode* temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->val = list2->val;
        list2 = list2->next;
        temp->next = NULL;
        if(list==NULL){
            list = temp;
            headList = temp;
        }else{
            list->next = temp;
            list = temp;
        }
    }
   
    return headList;
}
