//floyed cycle detection


void removeLoop(ListNode* head)
    {
      ListNode* slow=head;
       ListNode* fast=head;
       ListNode* prev=head;
       while(fast&&fast->next)
       {
           prev=slow;
           slow=slow->next;         //1 2 3 4
           fast=fast->next->next //     |   |
           if(slow==fast) break;//      |____|  loop
                                    // first we will get 4 then for getting 2 see below
       }
       if(slow!=fast)               //  if there is loop between 3 and 4 then we wioll get 3 in both 
       {                                // below while loop and upper while loop
           return;
       }
           fast=head;
           while(fast!=slow)
           {
               prev=slow;
               slow=slow->next;   //to get 2 
               fast=fast->next;
           }
           prev->next=NULL;    //make 2's prev next as NULL means 4 ->next is NULL
    }
