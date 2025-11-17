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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* t=head;
        ListNode* h = head;
        ListNode* temp=head;
        if(head->next ==NULL)
        return NULL;
        while(h!=NULL && h->next!=NULL){
            temp = t;
            t=t->next;
            h=h->next->next;
        }
        t = temp;
        t->next=t->next->next;
        return head;
    }
};