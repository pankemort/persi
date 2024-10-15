#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

void deleteNode(struct Node* head, int data) {
    if (head == NULL) {
        printf("The list is empty. No elements to delete.\n");
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == data) {
        head = temp->next;
        free(temp);
        printf("Element deleted successfully.\n");
        return;
    }

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element not found in the list. Cannot delete.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Element deleted successfully.\n");
}

void searchNode(struct Node* head, int data) {
    struct Node* current = head;
    int pos = 1;

    while (current != NULL) {
        if (current->data == data) {
            printf("Element found in the list at position %d.\n", pos);
            return;
        }
        current = current->next;
        pos++;
    }
    printf("Element not found in the list.\n");
}

void updateNode(struct Node* head, int key, int newValue) {
    struct Node* current = head;

    while (current != NULL) {
        if (current->data == key) {
            current->data = newValue;
            printf("Element updated successfully.\n");
            return;
        }
        current = current->next;
    }
    printf("Element not found in the list. Cannot update.\n");
}

void sort(struct Node* head) {
    if (head == NULL) {
        return;
    }

    struct Node* current = head;
    struct Node* index = NULL;
    int temp;

    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
    printf("Elements sorted successfully.\n");
}

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* current = head;
    printf("Elements in the list: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int findMin(struct Node* head) {
    if (head == NULL) {
        return -1;
    }

    int min = head->data;
    struct Node* current = head->next;

    while (current != NULL) {
        if (current->data < min) {
            min = current->data;
        }
        current = current->next;
    }
    return min;
}

int findMax(struct Node* head) {
    if (head == NULL) {
        return -1;
    }

    int max = head->data;
    struct Node* current = head->next;

    while (current != NULL) {
        if (current->data > max) {
            max = current->data;
        }
        current = current->next;
    }
    return max;
}

int findMid(struct Node* head) {
    if (head == NULL) {
        return -1;
    }

    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}