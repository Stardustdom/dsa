#include <stdio.h>
#define SIZE 3
int choice,rear=-1,front=-1,i;
char element;
char QUEUE[SIZE];

void ENQUE(char ELEMENT){
    if(front==-1 && rear==-1){
        front++;
        rear++;
    }
    else
    rear=(rear+1)%SIZE;
    QUEUE[rear]=ELEMENT;
}

char DELQUE(){
    
     char VALUE=QUEUE[front];
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else
    front=(front+1)%SIZE;
    return VALUE;
}

int main(){
    choice=1;
    while(choice!=0){
    printf("\nPress 1 for insert operation,\nPress 2 for delete operation,\nPress 3 for display \nEnter your choice:  ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        if ((front==0 && rear==SIZE-1) || front==rear+1)
        printf("Overflow condition reached");
        else{
        printf("Enter number to be inserted into the queue: ");
        scanf(" %c",&element);
        ENQUE(element);
        }
        break;
    case 2:
        if (front==-1)
        printf("Underflow condition reached");
        else {
        printf("The number deleted from the queue: %c",DELQUE());
        }
        break;
    case 3:
        if (front==-1)
        printf("Queue is empty, front=%d, rear=%d",front, rear);
        else{
            if(rear<SIZE && front<rear){
            for(i=front;i<=rear;i++)
            printf("%c ",QUEUE[i]);
            printf("front=%d, rear=%d",front, rear);
            }
            else{
            for(i=front;i<SIZE;i++)
            printf("%c ",QUEUE[i]);
            for(i=0;i<=rear;i++)
            printf("%c ",QUEUE[i]);
            printf("front=%d, rear=%d",front, rear);

            }
        }
        

        break;
    
    
    }
    }
}