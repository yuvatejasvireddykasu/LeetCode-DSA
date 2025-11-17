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
        if(head->next ==NULL)
        return NULL;
        while(h!=NULL && h->next!=NULL){
            if(h->next->next==NULL || h->next->next->next==NULL){
                t->next = t->next->next;
                return head;
            }
            t=t->next;
            h=h->next->next;
        }
        t->next->next;
        return head;
    }
};