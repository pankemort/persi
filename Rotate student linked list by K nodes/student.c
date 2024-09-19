#include "student.h"
#include<stdlib.h>
#include<string.h>

// void append(struct student s)
// {
//     //Fill your code here
// }

// void rotate(int k)
// {
// 	//Fill your code here
// }

// void display()
// {
// 	//Fill your code here
// }
#include "student.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern struct student *head;

// Append function to add student details to the linked list
void append(struct student new_student) {
    struct student *new_node = (struct student*) malloc(sizeof(struct student));
    *new_node = new_student;
    new_node->link = NULL;

    if (head == NULL) {
        head = new_node;
    } else {
        struct student *temp = head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = new_node;
    }
}

// Display function to show the linked list of students
void display() {
    struct student *temp = head;
    while (temp != NULL) {
        printf("%4d %10s %7s\n", temp->id, temp->name, temp->gender);
        temp = temp->link;
    }
}

// Rotate function to rotate the list by k nodes
void rotate(int k) {
    if (k == 0 || head == NULL) return;

    struct student *current = head;
    int count = 1;

    // Traverse to the k-th node
    while (count < k && current != NULL) {
        current = current->link;
        count++;
    }

    // If k is greater than or equal to the length of the list, do nothing
    if (current == NULL) return;

    // Set the k-th node as the end of the list and rotate
    struct student *kth_node = current;
    while (current->link != NULL) {
        current = current->link;
    }
    
    // Attach the last node to the head to complete the rotation
    current->link = head;
    head = kth_node->link;
    kth_node->link = NULL;
}
