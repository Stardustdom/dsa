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

void insert_at_pos(int data,int pos){
    struct Node *newNode=createNode(data);
    if (pos==1){
        insert_at_beg(data);
        return;
    }
    struct Node *temp=head;
    int c=1;
    while (temp!=NULL && c<pos-1){
        temp=temp->next;
        c++;
    }
    
    if (temp==NULL){
        printf("Invalid position\n");
        return;
    }
        
    else{
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

void del_from_beg(){
    if (head==NULL){
        printf("List is empty\n");
        return;
    }
    
    struct Node *temp=head;
    head=temp->next;
    free(temp);  
}

void del_from_end(){
    if (head==NULL){
        printf("List is empty\n");
        return;
    }

    struct Node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }  
    temp->next=NULL;
    
}

void del_at_pos(int pos){
    if (head==NULL){
        printf("List is empty\n");
        return;
    }
    struct Node *temp=head;
    int c=1;
    while (temp!=NULL && c<pos-1){
        temp=temp->next;
        c++;
    }
    
    if (temp==NULL){
        printf("Invalid position\n");
        return;
    }
        
    else{
        temp->next=temp->next->next;
    }
}

void traverse(){
    struct Node *temp = head;
    if(head==NULL){
        printf("List is empty\n");
    }
    while(temp!=NULL){
        printf("%d-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(){
    int choice,pos,data,y=1;
    while(y){
        printf("1.Insert at beginning\n2.Insert at end\n3.Insert at postion\n4.Delete at beginning\n5.Delete at end\n6.Delete at postion\n7.Traverse\n8.Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the data: ");
            scanf("%d",&data);
            insert_at_beg(data);
            break;

            case 2:
            printf("Enter the data: ");
            scanf("%d",&data);
            insert_at_end(data);
            break;

            case 3:
            printf("Enter the data: ");
            scanf("%d",&data);
            printf("Enter the position: ");
            scanf("%d",&pos);
            insert_at_pos(data,pos);
            break;

            case 4:
            del_from_beg();
            break;

            case 5:
            del_from_end();
            break;

            case 6:
            printf("Enter the position: ");
            scanf("%d",&pos);
            del_at_pos(pos);
            break;

            case 7:
            printf("Elements in the list are:\n");
            traverse();
            break;

            case 8:
            y=0;
        }
    }
}