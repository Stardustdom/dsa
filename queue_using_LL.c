#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

struct Node *createNode(int data){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void insert_at_end(int data){
    struct Node *newNode=createNode(data);
    if (head==NULL){
        head=newNode;
        return;
    }
    struct Node *temp=head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void del_from_beg(){
    if (head==NULL){
        printf("List is empty\n");
        return;
    }
    
    struct Node *temp=head;
    printf("Deleted element is %d",head->data);
    head=temp->next;
    free(temp);
}

void traverse(){
    struct Node *temp = head;
    if(head==NULL){
        printf("List is empty\n");
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}

int main(){
    int choice,data,y=1;
    while(y){
        printf("\n1.Insert into queue\n2.Delete from queue\n3.Display queue\n4.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter data to be inserted into queue: ");
            scanf("%d",&data);
            insert_at_end(data);
            break;

            case 2:
            if(head==NULL)
            printf("Queue is empty\n");
            else
            del_from_beg();
            break;

            case 3:
            printf("Queue elements are:\n");
            traverse();
            break;

             case 4:
             y=0;
        }
    }

}