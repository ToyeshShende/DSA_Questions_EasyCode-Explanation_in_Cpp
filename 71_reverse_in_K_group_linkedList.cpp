https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/896499684/

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
    int length(ListNode *head,int k){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
            if(count==k){
                return 1;
            }
        }
        return 0;
    
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int possible=length(head,k);
        if(possible==0){
            return head;
        }
        //normal reverse code
        ListNode *prev=NULL;
        ListNode *forward=NULL;
        ListNode *curr=head;
        int count=0;
        while(curr!=NULL && count<k){  //run only 2times if k=2;
            forward=curr->next;
            curr->next=prev;
            prev=curr; // move to right by one position
            curr=forward;
            count++;

        }  

        // for next nodes apply recursion and connect to old head
        if(forward!=NULL){
           // reverse element 2 ->1->NULL
           //                prev  head
            head->next=reverseKGroup(forward,k);

        }
        return prev;
    }
};
