https://www.codingninjas.com/codestudio/problems/circularly-linked_1070232?source=youtube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan&leftPanelTab=1


#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
    // Write your code here.
    if(head==NULL){
        return true;
    }
    if(head->next==NULL){
        return false;
    }
    Node *temp=head;
    while(temp!=NULL && temp->data!=0){
        temp->data=0;  //make all 0 to end the while loop
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
    if(temp!=NULL && temp!=head){
        return false;
    }
    return true;
}


Linked list cycle
https://leetcode.com/problems/linked-list-cycle/submissions/896708826/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        if(head->next==NULL){
            return false;
        }
        unordered_map<ListNode*,int>mp;
        while(head!=NULL){
            if(mp.find(head)==mp.end()){
                mp[head]=1;
                head=head->next;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};
