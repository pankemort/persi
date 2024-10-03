#include <stdio.h>
#include <stdlib.h>
#include "dNode.h"


int main() {
    struct dnode *head = NULL;

    int choice, data, position, min, max,ele,newele;

    while (1) {
        printf("1. Insert at beginning\n");
        printf("2. Delete at beginning\n");
        printf("3. Search an element\n");
        printf("4. Size of list\n");
        printf("5. Update an element\n");
        printf("6. Count the occurences of an element\n");
        printf("7. Display the list\n");
        printf("8. Find minimum and maximum element in the list\n");
        printf("9. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert:\n");
                scanf("%d", &data);
                head=addatbeginning(head, data);
                printf("Element inserted successfully.\n");
                break;
            
            case 2:
                head=deleteatbeginning(head);
                break;
            
            case 3:
                printf("Enter the element to search:\n");
                scanf("%d", &data);
                searchNode(head, data);
                break;
            case 4:
                printf("Size of the linked list: %d\n", getSize(head));
                break;
            case 5:
                printf("Enter the element to update:\n");
                scanf("%d", &ele);
                printf("Enter the new value:\n");
                scanf("%d", &newele);
                updateNode(head, ele,newele);
                break;
            case 6:
                printf("Enter the element to count:\n");
                scanf("%d", &data);
                printf("Occurrences of %d: %d\n",data, countOccurrences(head, data));
                break;
            case 7:
                displayList(head);
                break;
            case 8:
                min = findmin(head);
                max = findmax(head);
                printf("Minimum element in the list is %d\n", min);
                printf("Maximum element in the list  is %d\n", max);
                break;
            case 9:
            printf("Exiting the program.");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
