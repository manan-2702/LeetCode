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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* dummyHead = head;
        int counter=1;
        while(dummyHead->next!=nullptr){
            counter++;
            dummyHead = dummyHead->next;
        }
        k=(k+counter)%counter;
        
        dummyHead = head;
        for(int i=1;i<=k;i++){
            ListNode* tail = head;
            ListNode* tailprev = NULL;
            while(tail->next!=nullptr){
                tailprev=tail;
                tail=tail->next;
            }
            tail->next=head;
            tailprev->next=nullptr;
            head=tail;
        }
        return head;
    }
};