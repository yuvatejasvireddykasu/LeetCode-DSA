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
    ListNode* findMiddle(ListNode* head){
        ListNode* t =head;
        ListNode* h=head->next;
        while(h!=NULL && h->next!=NULL){
            t=t->next;
            h=h->next->next;
        }
        return t;
    }
    ListNode* mergeTwoLists(ListNode* h1,ListNode* h2){
        ListNode* temp=new ListNode(-1);
        ListNode* ans=temp;
        while(h1!=NULL && h2!=NULL){
            if(h1->val<h2->val){
                temp->next=h1;
                temp=temp->next;
                h1=h1->next;
            }else{
                temp->next=h2;
                temp=temp->next;
                h2=h2->next;
            }
        }
        while(h1!=NULL){
                temp->next=h1;
                temp=temp->next;
                h1=h1->next;
        }
        while(h2!=NULL){
                temp->next=h2;
                temp=temp->next;
                h2=h2->next; 
        }
        return ans->next;
    }
    ListNode* sortList(ListNode* head) {
       if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* middle =findMiddle(head);
        ListNode* r=middle->next;
        middle->next=NULL;
        ListNode* h1=sortList(head);
        ListNode* h2=sortList(r);
       return mergeTwoLists(h1,h2);
    }
};