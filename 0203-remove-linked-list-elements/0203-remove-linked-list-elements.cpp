/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr){
            return head;
        }
        ListNode* dH = head;
        ListNode* prev = new ListNode(0,head);
        while(head!=nullptr){
            if(dH->val==val){
                dH = dH->next;
            }
            if(head->val==val){
                prev->next=head->next;
                head=head->next;
            }else{
                head=head->next;
                prev=prev->next;
            } 
        }
        return dH;
    }
};