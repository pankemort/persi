#include <stdio.h>
#include <stdlib.h>

struct dnode {
    struct dnode *prev;
    int data;
    struct dnode *next;
};
struct dnode* addatbeginning(struct dnode *head, int data);
struct dnode* deleteatbeginning(struct dnode *head);
void searchNode(struct dnode *head, int data);
int getSize(struct dnode *head);
void updateNode(struct dnode *head, int key, int newValue);
void displayList(struct dnode *head);
int countOccurrences(struct dnode *head, int data);
int findmin(struct dnode *head);
int findmax(struct dnode *head);