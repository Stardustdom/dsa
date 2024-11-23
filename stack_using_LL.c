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

void insert_at_beg(int data){
    struct Node *newNode=createNode(data);
    newNode->next=head;
    head=newNode;

}

void del_from_beg(){
    if (head==NULL){
        printf("List is empty\n");
        return;
    }
    
    struct Node *temp=head;
    printf("Popped element is %d",head->data);
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
        printf("\n1.Push into stack\n2.Pop from stack\n3.Display stack\n4.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter data to push into stack\n");
            scanf("%d",&data);
            insert_at_beg(data);
            break;

            case 2:
            if(head==NULL)
            printf("Stack is empty\n");
            else
            del_from_beg();
            break;

            case 3:
            printf("Stack elements are:\n");
            traverse();
            break;

             case 4:
             y=0;
        }
    }

}