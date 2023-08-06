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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* dH = head;
        ListNode* e = new ListNode(0);
        ListNode* o = new ListNode(0);
        ListNode* eH = e;
        ListNode* oH = o;
        int counter = 1; 
        while(head!=nullptr){
            if((counter%2)==0){
                e->next=head;
                e=e->next;
            }else{
                o->next=head;
                o=o->next;
            }
            head=head->next;
            counter++;
        }
        dH=oH->next;
        o->next=eH->next;
        e->next=nullptr;

        return dH;
    }
};