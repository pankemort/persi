#include "dNode.h"

struct dnode* addatbeginning(struct dnode *head, int data) {
    struct dnode *new_node = (struct dnode*)malloc(sizeof(struct dnode));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = head;
    if (head != NULL) {
        head->prev = new_node;
    }
    head = new_node;
    return head;
}

struct dnode* deleteatbeginning(struct dnode *head) {
    if (head == NULL) {
        return NULL;
    }
    struct dnode *temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
    return head;
}

void searchNode(struct dnode *head, int data) {
    struct dnode *current = head;
    while (current != NULL) {
        if (current->data == data) {
            printf("Node with data %d found.\n", data);
            return;
        }
        current = current->next;
    }
    printf("Node with data %d not found.\n", data);
}

int getSize(struct dnode *head) {
    int size = 0;
    struct dnode *current = head;
    while (current != NULL) {
        size++;
        current = current->next;
    }
    return size;
}

void updateNode(struct dnode *head, int key, int newValue) {
    struct dnode *current = head;
    while (current != NULL) {
        if (current->data == key) {
            current->data = newValue;
            printf("Node with data %d updated to %d.\n", key, newValue);
            return;
        }
        current = current->next;
    }
    printf("Node with data %d not found.\n", key);
}

void displayList(struct dnode *head) {
    struct dnode *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int countOccurrences(struct dnode *head, int data) {
    int count = 0;
    struct dnode *current = head;
    while (current != NULL) {
        if (current->data == data) {
            count++;
        }
        current = current->next;
    }
    return count;
}

int findmin(struct dnode *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return -1;
    }
    int min = head->data;
    struct dnode *current = head->next;
    while (current != NULL) {
        if (current->data < min) {
            min = current->data;
        }
        current = current->next;
    }
    return min;
}

int findmax(struct dnode *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return -1;
    }
    int max = head->data;
    struct dnode *current = head->next;
    while (current != NULL) {
        if (current->data > max) {
            max = current->data;
        }
        current = current->next;
    }
    return max;
}