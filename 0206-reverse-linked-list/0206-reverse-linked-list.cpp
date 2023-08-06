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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode* prev = new ListNode(0,head);
        ListNode* dH = head;
        while(head!=nullptr){
            ListNode* temp = head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        dH->next=nullptr;
        return prev;
    }
};