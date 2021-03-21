    #include<stdio.h>  
    #include<stdlib.h>  
    struct node   
    {  
        int data;  
        struct node *next;   
    };  
    struct node *head;  
      
    void insert_beg ();   
    void insert_pos ();  
    void insert_last(); 
    void delete_beg();  
    void delete_last(); 
    void delete_pos(); 
    void display(); 
    int main ()  
    {  
        int choice =0;  
        while(choice != 8)   
        {  
            printf("\nMenu\n"); 
            printf("\n====\n");  
            printf("\n1.Insert in begining\n2.Insert at a position\n3.Insert at last\n4.Delete from Beginning\n5.Delete from last\n6.Delete from a position\n7.Show\n8.Exit\n");  
            printf("\nEnter your choice:\n");         
            scanf("\n%d",&choice);  
            switch(choice)  
            {  
                case 1:  
                insert_beg();      
                break;  
                case 2:  
                insert_pos();         
                break;  
                case 3:  
                insert_last();   
                break;  
                case 4:  
                delete_beg();        
                break; 
                case 5:  
                delete_last();        
                break;  
                case 6 :
                delete_pos();  
                break;  
                case 7:
                display();
                break;
                case 8:
                exit(0);
                break;
                default:  
                printf("Enter valid choice");  
            }  
        }  
    }  
    void insert_beg()  
    {  
        struct node *ptr,*temp;   
        int item;   
        ptr = (struct node *)malloc(sizeof(struct node));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW");  
        }  
        else   
        {  
            printf("\nEnter the item to be inserted:");
            scanf("%d",&item);  
            ptr -> data = item;  
            if(head == NULL)  
            {  
                head = ptr;  
                ptr -> next = head;  
            }  
            else   
            {     
                temp = head;  
                while(temp->next != head)  
                    temp = temp->next;  
                ptr->next = head;   
                temp -> next = ptr;   
                head = ptr;  
            }   
            printf("\nNode inserted\n");  
        }  
                  
    }  
    void insert_pos()  
    {  
        struct node *ptr,*temp;   
        int item,pos;
        ptr = (struct node *)malloc(sizeof(struct node));  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW\n");  
        }  
        else  
        {  
            printf("Enter the position:");
            scanf("%d",&pos);
            printf("\nEnter the item to be inserted:");  
            scanf("%d",&item);  
            ptr->data = item;  
            if(head == NULL)  
            {  
                head = ptr;  
                ptr -> next = head;    
            }  
            else  
            {  
                temp = head;  
               for(int i=0;i<pos;i++)
                {  
                    temp = temp -> next;  
                } 
                ptr->next=temp->next;
                temp -> next = ptr;   
            }  
              
            printf("\nNode inserted\n");  
        }  
      
    }  
      
    void delete_beg()  
    {  
        struct node *ptr;   
        if(head == NULL)  
        {  
            printf("\nUNDERFLOW");    
        }  
        else if(head->next == head)  
        {  
            head = NULL;  
            free(head);  
            printf("\nNode deleted\n");  
        }  
          
        else  
        {   ptr = head;   
            while(ptr -> next != head)  
                ptr = ptr -> next;   
            ptr->next = head->next;  
            free(head);  
            head = ptr->next;  
            printf("\nNode deleted\n");  
      
        }  
    }  
    void delete_last()  
    {  
        struct node *ptr, *preptr;  
        if(head==NULL)  
        {  
            printf("\nUNDERFLOW");  
        }  
        else if (head ->next == head)  
        {  
            head = NULL;  
            free(head);  
            printf("\nNode deleted\n");  
      
        }  
        else   
        {  
            ptr = head;  
            while(ptr ->next != head)  
            {  
                preptr=ptr;  
                ptr = ptr->next;  
            }  
            preptr->next = ptr -> next;  
            free(ptr);  
            printf("\nNode deleted\n");  
      
        }  
    }  
    void delete_pos()
    {
        struct node *ptr,*p;   
        if(head == NULL)  
        {  
            printf("\nUNDERFLOW");    
        }  
        else if(head->next == head)  
        {  
            head = NULL;  
            free(head);  
            printf("\nNode deleted\n");  
        }  
        else
        {
           int pos;
           printf("Enter the positon to be deleted");
           scanf("%d",&pos);
           ptr=head;
           for(int i=0;i<pos;i++)
           {
               p=ptr;
               ptr=ptr->next;
           }
           p->next=ptr->next;
           free(ptr);
           printf("\nNode deleted\n");

        }
        
    }
    void insert_last()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter the item to be inserted:");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        printf("\nNode inserted\n");  
    }  
  
}  
   
    
      
    void display()  
    {  
        struct node *ptr;  
        ptr=head;  
        if(head == NULL)  
        {  
            printf("\nUnderflow");  
        }     
        else  
        {  
            printf("\nThe list is:\n");  
              
            while(ptr -> next != head)  
            {  
              
                printf("%d\n", ptr -> data);  
                ptr = ptr -> next;  
            }  
            printf("%d\n", ptr -> data);  
        }  
                  
    }  
