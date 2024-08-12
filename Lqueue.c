#include <stdio.h>
#define SIZE 3
int choice,rear=-1,front=-1,i,element;
char QUEUE[SIZE];

void ENQUE(char ELEMENT){
    if(front=-1){
        front++;
    }
    QUEUE[++rear]=ELEMENT;
}

char DELQUE(){
    int VALUE=QUEUE[front++];
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
        if (rear==(SIZE-1))
        printf("Overflow condition reached");
        else{
        printf("Enter number to be inserted into the queue: ");
        scanf(" %c",&element);
        ENQUE(element);
        }
        break;
    case 2:
        if (front>rear || front==-1)
        printf("Underflow condition reached");
        else
        printf("The number deleted from the queue: %c",DELQUE());
        break;
    case 3:
        if (front>rear || front==-1)
        printf("Queue is empty, front=%d, rear=%d",front, rear);
        else{
            for(i=front;i<=rear;i++)
            printf("%c ",QUEUE[i]);
            printf("front=%d, rear=%d",front, rear);
        }
        

        break;
    
    
    }
    }
}