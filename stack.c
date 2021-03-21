#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int stack[SIZE];

int choice,top,x,i;
void push();
void pop();
void display();
int main()
{
	
  top=-1;
  printf("Stack Operations");
  printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
  
  do
  
  {
	  
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    
    switch(choice)
    
    {
		
      case 1:push();
             break;
      case 2:pop();
             break;
      case 3:display();
             break;
      case 4:exit(0);  
             break;
      default:printf("Wrong choice");
      
    }
  }
  
  while(choice!=4);
  
}

void push()

{
	
  if(top>=SIZE-1)
  printf("Stack overflow");
  
  else
  
  {
	  
    printf("Enter a value to push:");
    scanf("%d",&x);
    top++;
    stack[top]=x;
    
  }
}

void pop()

{
	
  if(top<=-1)
  printf("Stack underflow");
  
  else
  
  {
	  
    printf("Poped element is %d",stack[top]);
    top--;
    
  }
}
void display()

{
	
  if(top>=0)
  
  {
	  
    printf("Elements in the stack are ");
    for(i=top;i>=0;i--)
    printf("%d ",stack[i]);
    
  }
  
  else
  
   printf("Stack is empty");
   
}
  
      
      
     
  
