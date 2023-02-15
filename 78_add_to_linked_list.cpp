https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

do all like array just insert all addions nodes in newly created node and at last if carry still remain greater than 0 then add a new node(1) at starting 


Node *reverse(Node* firsty){
        Node* prev=NULL;
        Node* next=firsty;
        Node* curr=firsty;
        while(curr!=NULL){
            
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
            
        }
        return prev;
    }
    
    
    void print(Node *head){
        while(head!=NULL){
            cout<<head->data;
            head=head->next;
        }
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node *firsty=reverse(first);
        // print(first);
        Node *secondy=reverse(second);
        // print(second);
        
        int carry=0;
        
     
        Node *prev=NULL;
        while(firsty!=NULL && secondy!=NULL){
            
                int sum=firsty->data + secondy->data +carry;
                carry=sum/10;
                int y=sum%10;
                Node* p=new Node(y);
                p->next=prev;    //        5 4 3   +
                firsty=firsty->next;   //  5 4   
                secondy=secondy->next; //  0       9->0   prev move to left after every linked       
                prev=p; 
                
            
        }

        while(firsty!=NULL){
            
            int sum=firsty->data +carry;
                carry=sum/10;
                int y=sum%10;
                Node* t=new Node(y);
                t->next=prev;    //        5 4 3   +
                firsty=firsty->next;   //  5 4   
                prev=t;
        }
        while(secondy!=NULL){
            
            int sum= secondy->data +carry;
                carry=sum/10;
                int y=sum%10;
                Node* t=new Node(y);
                t->next=prev;    //        5 4 3   +
                secondy=secondy->next;   //  5 4   
                prev=t;
        }
        if (carry!=0){
            Node *t=new Node(1);
            t->next=prev;
            prev=t;
        }
        return prev;
        
        
    }
