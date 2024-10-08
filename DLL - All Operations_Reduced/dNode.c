
#include <stdio.h>
#include <stdlib.h>
#include "dNode.h"

struct dnode* addatbeginning(struct dnode *head, int data) {
    struct dnode*newnode=(struct dnode*)malloc(sizeof(struct dnode));
    if(head==NULL){
        newnode->data=data;
        newnode->prev=NULL;
        newnode->next=NULL;
        return newnode;
    }
    else{
        newnode->data=data;
        newnode->prev=NULL;
        newnode->next=head;
        head->prev=newnode;
        return newnode;
    }
}

struct dnode* deleteatbeginning(struct dnode *head) {
    if (head == NULL) {
        printf("The list is empty. No elements to delete.\n");
        return head;
    } else {
        struct dnode* temp = head;
        head = head->next;
        if(head!=NULL) head->prev=NULL;
        free(temp);
        printf("Element deleted successfully\n");
        return head;
    }
}

void searchNode(struct dnode *head, int data) {
    int pos=1;
    struct dnode*temp=head;
    if(temp==NULL){
        printf("Element not found.\n");
        return;
    }
    while(temp!=NULL){
        if(temp->data==data){
            printf("Element found at position %d.\n",pos);
            return;
        }
        temp=temp->next;
        pos++;
    }
    printf("Element not found.\n");
}

int getSize(struct dnode *head) {
    int c=0;
    struct dnode*temp=head;
    if(temp==NULL){
        return 0;
    }
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
}

void updateNode(struct dnode *head, int key, int newValue) {
    struct dnode *temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            temp->data = newValue;
            printf("Element updated successfully.\n");
            printf("The elements in the doubly linked list are ");
            displayList(head);
            return;
        }
        temp = temp->next;
    }
    printf("Element not found in the list. Cannot update.\n");
}
void displayList(struct dnode *head) {
    struct dnode *temp = head;
    if(temp==NULL){
        printf("The list is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int countOccurrences(struct dnode *head, int data) {
    struct dnode*temp=head;
    int cnt=0;
    while(temp!=NULL){
        if(temp->data==data){
            cnt++;
        }
        temp=temp->next;
    }
    return cnt;
}

int findmin(struct dnode *head) {
    if(head==NULL) return -1;
    int min=head->data;
    struct dnode*temp=head;
    while(temp!=NULL){
        if(temp->data < min){
            min=temp->data;
        }
        temp=temp->next;
    }
    return min;
}

int findmax(struct dnode *head) {
   if(head==NULL) return -1;
   int max=head->data;
   struct dnode*temp=head;
   while(temp!=NULL){
        if(temp->data > max){
            max=temp->data;
        }
        temp=temp->next;
   }
   return max;
}

