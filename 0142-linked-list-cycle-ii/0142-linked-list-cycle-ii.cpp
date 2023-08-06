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
    ListNode* cycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                return slow;
            }
        }
        return nullptr;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode* meet = cycle(head);
        if(meet==nullptr){
            return nullptr;
        }
        ListNode* start = head;
        while(start!=meet){
            start=start->next;
            meet=meet->next;
        }
        return start;
    }
};