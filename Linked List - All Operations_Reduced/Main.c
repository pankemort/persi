#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

int main() {
    struct Node* head = NULL;
    int choice, data, key, newValue,position;

    do {
        printf("1.Insert an element at beginning\n");
        printf("2.Delete an element\n");
        printf("3.Search an element\n");
        printf("4.Update an element\n");
        printf("5.Ascending order sort\n");
        printf("6.Display the elements of the list\n");
        printf("7.Find minimum and maximum element in the list\n");
        printf("8.Find middle element in the list\n");
        printf("9. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert:\n ");
                scanf("%d", &data);
                head = insertNode(head, data);
                printf("Element inserted successfully.\n");
                break;
            case 2:
                printf("Enter the element to delete:\n");
                scanf("%d", &data);
                deleteNode(head, data);
                break;
            case 3:
                printf("Enter the element to search:\n");
                scanf("%d", &data);
                searchNode(head, data);
                break;
            case 4:
                printf("Enter the element to update:\n");
                scanf("%d", &key);
                printf("Enter the new value:\n");
                scanf("%d", &newValue);
                updateNode(head, key, newValue);
                break;
            case 5:
                sort(head);
                break;
            case 6:
                displayList(head);
                break;
            case 7:
                printf("Minimum element in the list is %d\n",findMin(head));
                printf("Maximum element in the list is %d\n",findMax(head));
                break;
            case 8:
                printf("Middle element in the list is %d\n",findMid(head));
                break;
            case 9:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 9);

    return 0;
}
