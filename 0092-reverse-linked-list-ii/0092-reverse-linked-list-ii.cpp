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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummyH = head;
        ListNode* prev1 = new ListNode(0,head);
        ListNode* prev2 = new ListNode(0,head);
        int counter=1;
        while(head!=nullptr){
            if(counter==left){
                if(left==right){
                    return dummyH;
                }
                ListNode *temp2 = head;
                while(counter!=right){
                    ListNode* temp = head->next;
                    head->next=prev2;
                    prev2=head;
                    head=temp;
                    counter++;
                }
                ListNode* temp = head->next;
                head->next=prev2;
                prev2=head;
                head=temp;
                temp2->next=head;
                prev1->next=prev2;
                if(left==1){
                    dummyH=prev2;
                }
            }else{
                head=head->next;
                prev1=prev1->next;
                prev2=prev2->next;
                counter++;
            } 
        }
        return dummyH;
    }
};