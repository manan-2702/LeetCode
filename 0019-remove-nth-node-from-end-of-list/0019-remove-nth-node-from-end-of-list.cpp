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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node = head;
        int cnt = 0;
        while(node!=nullptr){
            cnt++;
            node=node->next;
        }
        int pos = cnt-n;
        if(pos==0){
            head=head->next;
            return head;
        }
        ListNode* prev=head;
        for(int i=0;i<cnt-n-1;i++){
            prev=prev->next;
        }
        prev->next=prev->next->next;
        return head;
    }
};