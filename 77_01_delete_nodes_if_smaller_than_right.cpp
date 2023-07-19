
https://leetcode.com/problems/remove-nodes-from-linked-list/description/

ListNode *reverse(ListNode* head){
        ListNode *prev=NULL;
        ListNode *curr=head;
        
        while(curr!=NULL){
            
            ListNode *ford=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ford;

        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        ListNode *curr=head;
        //move to right of curr and find greater element than current and just point curr to that element 
        while(curr!=NULL){
            ListNode *ford=curr->next;
            while(ford!=NULL){
                if(curr->val>ford->val){
                    ford=ford->next;}
                else{
                    break;
                }
            }
            curr->next=ford;
            curr=curr->next;
        }
        head=reverse(head);
        return head;
    }
