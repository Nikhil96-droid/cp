#include<stdio.h>
#define MAX 4
int stack[MAX],item;
int ch,top=-1,count=0,status=0;

/*Push Functions */

void push(int stack[],int item)
{
    if(top==(MAX-1))
    printf("\n\n Stack is overflow");
    else
    {
        stack[++top]=item;
        status++;
    }
}

/*Pop Functions */

int pop(int stack[])
{
    int ret;
    if(top==-1)
    printf("\n\n Stack is underflow");
    else
    {
        ret=stack[top-1];
        status--;
        printf("\n Popped element is %d",ret);
    }
    return ret;
}

/*Palindroem or not Functions */

void palindrome(int stack[])
{
    int i,temp;
    temp=status;
    for(i=0; i<temp; i++)
    {
        if(stack[i]==pop(stack))
        count++;
    }
    if(temp==count)
    printf("\n Stack contents are Palindrome");
    else
        printf("\n Stack contents are not Palindrome");
}

/*Functions to display stack */

void display(int stack[])
{
    int i;
    printf("\n The stack contents are :");
    if(top==-1)
    printf("\n Stack is empty");
    else
    {
        for(i=top; i>=0; i++)
        printf("\n______\n|%d|",stack[i]);
        printf("\n");
    }
}

/* Main functions */

void main()
{
    do
    {
        printf("\n\n______MAIN MENU______\n");
        printf("\n1.PUSH(insert) in the stack");
        printf("\n2.POP(delete) in the stack");
        printf("\n3.PALINDROME check using stack");
        printf("\n4.Exit(End the execution)");
        printf("\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n Entered a element to be pushed");
            scanf("%d",&item);
            display(stack);
            break;
            
            case 2:
            item=pop(stack);
            display(stack);
            break;
            
            case 3:
            palindrome(stack);
            break;
            
            case 4:
            exit(0);
            break;
            
            default:
            printf("\n End of execution");
        } //end of switch case
        
    }
    while(ch!=4);
}
