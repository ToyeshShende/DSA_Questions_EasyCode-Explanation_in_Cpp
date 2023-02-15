
https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

bool checkpalindrome(int arr[],int count){
        int s=0;
        int e=count-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return false;
            }
            s++;
            e--;
            
        }
        return true;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        int count=0;
        Node *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
            
        }
        int i=0;
        
            int arr[count];
            while(head!=NULL){
                arr[i]=head->data;
                head=head->next;
                i++;
            }
            return checkpalindrome(arr,count);
            
            
            
        }
