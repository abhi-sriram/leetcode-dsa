/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> map;
        while(head!=NULL){
            cout<<head->val<<endl;
            if(map.find(head)==map.end()){
                map[head] = head->val;
            }else{
                return true;
            }
            head = head->next;
        }
        return false;
    }
};
