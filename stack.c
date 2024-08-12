#include <stdio.h>
#define SIZE 3
int choice,top=-1,i,element;
int STACK[SIZE];

void PUSH(int ELEMENT){
    STACK[++top]=ELEMENT;
}

int POP(){
    int VALUE=STACK[top--];
    return VALUE;
}

int main(){
    choice=1;
    while(choice!=0){
    printf("\nPress 1 for push operation,\nPress 2 for pop operation,\nPress 3 for display \nEnter your choice:  ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        if (top==(SIZE-1))
        printf("Overflow condition reached");
        else{
        printf("Enter number to be pushed into the stack: ");
        scanf("%d",&element);
        PUSH(element);
        }
        break;
    case 2:
        if (top==-1)
        printf("Underflow condition reached");
        else
        printf("The number popped from the stack: %d",POP());
        break;
    case 3:
        if (top==-1)
        printf("Stack is empty, top=%d",top);
        else{
            for(i=top;i>=0;i--)
            printf("%d ",STACK[i]);
            printf(" top= %d ",top);
        }
        

        break;
    
    
    }
    }
}