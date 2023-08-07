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
    void reorderList(ListNode* head) {
        ListNode* dH = head;
        ListNode* d = head;
        ListNode* d1 = head;
        int counter = 1;
        while(head!=nullptr){
            head=head->next;
            counter++;
        }
        if(counter%2==0){
            for(int i=1;i<counter/2;i++){
                d1=d1->next;
            }
        }else{
            for(int i=1;i<(counter/2)+1;i++){
                d1=d1->next;
            }
        }
        ListNode* temp = d1->next;
        d1->next=nullptr;
        stack<ListNode*> s;
        while(temp!=nullptr){
            s.push(temp);
            temp=temp->next;
        }
        while(!s.empty()){
            ListNode* te = d->next;
            ListNode* to = s.top();
            s.pop();
            d->next = to;
            to->next = te;
            d=te;
        }
        if(counter%2!=0){
            
        }
    }
};