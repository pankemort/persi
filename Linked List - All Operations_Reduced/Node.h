#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data);
struct Node* insertNode(struct Node* head, int data);
void deleteNode(struct Node* head, int data);
void searchNode(struct Node* head, int data);
void updateNode(struct Node* head, int key, int newValue);
void sort(struct Node* head);
void displayList(struct Node* head);
int findMin(struct Node* head);
int findMax(struct Node* head) ;
int findMid(struct Node* head) ;
