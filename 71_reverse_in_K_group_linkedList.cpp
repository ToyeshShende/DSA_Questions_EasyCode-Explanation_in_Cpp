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


https://leetcode.com/problems/reverse-linked-list-ii/description/?envType=study-plan-v2&envId=top-interview-150
[WhatsApp Image 2023-07-28 at 20 52 18](https://github.com/ToyeshShende/DSA_Questions_EasyCode-Explanation_in_Cpp/assets/119116915/90c0d2d5-454a-494e-bc28-aa18044b12a6)



public ListNode reverseBetween(ListNode head, int left, int right) {
    if (head == null) {
        return null;
    }
    ListNode dummy = new ListNode(0);
    dummy.next = head;
    ListNode pre = dummy;
    for (int i = 0; i < left - 1; i++) {
        pre = pre.next;
    }
    ListNode start = pre.next;
    ListNode then = start.next;
    for (int i = 0; i < right - left; i++) {
        start.next = then.next;
        then.next = pre.next;
        pre.next = then;
        then = start.next;
    }
    return dummy.next;
}

