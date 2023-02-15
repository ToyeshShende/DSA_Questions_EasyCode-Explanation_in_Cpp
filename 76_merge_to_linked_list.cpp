https://leetcode.com/problems/merge-two-sorted-lists/submissions/898270388/


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
    ListNode* solve(ListNode* list1, ListNode* list2){
        if(list1->next==NULL){ // if list has only 1 Node
            list1->next=list2; // join the second to it
            return list1;
        }
        //1 3 4 6  l1
        //2 3 5   l2
        ListNode* curr1=list1;
        ListNode* next1=curr1->next;
        ListNode* curr2=list2;
        ListNode* next2=curr2->next;
        while(next1!=NULL && curr2!=NULL){
            if(curr1->val<=curr2->val && next1->val>=curr2->val){
                curr1->next=curr2; //link list2 in list1
                next2=curr2->next; // for taking curr2's next
                curr2->next=next1;
                curr1=curr2;//move to right
                curr2=next2;
                
            }
            else{
                curr1=curr1->next;//move to right
                next1=next1->next;
                if(next1==NULL){//if list1 ends
                    curr1->next=curr2; // join list2 node to the end of list1
                    return list1;
                }
            }
        }
        return list1;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        else if(list1==NULL){
            return list2;
        } 
        else if(list2==NULL){
            return list1;
        }
        if (list1->val>=list2->val){
            return solve(list2,list1);
         
        }
        else if(list1->val<=list2->val){
            return solve (list1,list2);
        }
        return NULL;
    }
};
