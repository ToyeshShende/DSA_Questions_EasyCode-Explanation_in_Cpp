codingninjas.com/codestudio/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=1
  
  Node* sortList(Node *head)
{
    // Write your code here.
    int arr[3]={0,0,0};
    Node * temp=head;
    while (temp != NULL) {
        int val=temp->data;
        if(val==0){
            arr[0]++;
        }
        else if(val==1){
            arr[1]++;
        }
        else{
            arr[2]++;
        }
        temp=temp->next;
    }
    Node *curr=head;
    while(arr[0]!=0){
        curr->data=0;
        arr[0]--;    
        curr=curr->next;
    }
    while(arr[1]!=0){
        curr->data=1;
        arr[1]--;    
        curr=curr->next;
    }
    while(arr[2]!=0){
        curr->data=2;
        arr[2]--;    
        curr=curr->next;
    }
    return head;
}
