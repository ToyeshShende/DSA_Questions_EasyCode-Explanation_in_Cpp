https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/897803291/


for sorted linked list 
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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *curr=head;
        
        while(curr!=NULL ){
            if(curr->next!=NULL && curr->val==curr->next->val){
                //always check if next is NULL or not 
                curr->next=curr->next->next;
        
            }
            else{  //not equal
                curr=curr->next;
            }
        }
        return head;
        
    }
};


for unsorted linked list

https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

Node * removeDuplicates( Node *head) 
    {     unordered_set<int>s;
        if(head==NULL){
            return NULL;
        }
        else{
            s.insert(head->data);  // add first element
        }
        Node* curr=head;
       
        while(curr!=NULL && curr->next!=NULL){
            if(s.find(curr->next->data)!=s.end()){
                //node is in s
                
                curr->next=curr->next->next;
                //asign kartan na next next null asla tari chalte pn if codition madhe null aslela chalat nahi
            }
            else{ // if not same then push next of curr
                s.insert(curr->next->data);
                curr=curr->next;
            }
        }
        return head;
        
     // your code goes here
    }
