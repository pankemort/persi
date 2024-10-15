
Write a program to perform the following operations in a Linked List.

1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list

Define a structure
struct Node {
    int data;
    struct Node* next;
};

Input and Output Format:

Refer sample input and output for formatting specifications.
If the data to be searched is not present in the Linked List, print "Element not found in the list". If the data to be searched is present, print “Element found in the list at position #pos.“.
If choice is to display the elements, but if no elements present in the Linked List, print "The list is empty".
If choice is to delete an element, but if no elements present in the Linked List, print "The list is empty. No elements to delete.". If the element to be deleted is not found, then print “Element not found in the list. Cannot delete.”
If the element to be updated is not found, then print “Element not found in the list. Cannot update.”
If the user entered any other choice other than 1-9 print “Invalid choice. Please try again” and again displays the menu.

Function Specifications:
struct Node* createNode(int data)
struct Node* insertNode(struct Node* head, int data)
void deleteNode(struct Node* head, int data)
void searchNode(struct Node* head, int data)
void updateNode(struct Node* head, int key, int newValue)
void displayList(struct Node* head)
int findmid (struct Node *head)
int findmin (struct Node *head)
int findmax (struct Node *head)
void sort(struct Node *head)

[All text in bold corresponds to input and the rest corresponds to output.]
Sample Input and Output:
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
2
Enter the element to delete:
45
The list is empty. No elements to delete.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
1
Enter the element to insert:
23
Element inserted successfully.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
1
Enter the element to insert:
45
Element inserted successfully.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
1
Enter the element to insert:
78
Element inserted successfully.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
1
Enter the element to insert:
90
Element inserted successfully.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
1
Enter the element to insert:
15
Element inserted successfully.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
6
Elements in the list: 15 90 78 45 23 
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
2
Enter the element to delete:
100
Element not found in the list. Cannot delete.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
2
Enter the element to delete:
78
Element deleted successfully.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
6
Elements in the list: 15 90 45 23 
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
3
Enter the element to search:
100
Element not found in the list.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
3
Enter the element to search:
45
Element found in the list.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
4
Enter the element to update:
100
Enter the new value:
200
Element not found in the list. Cannot update.
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
4
Enter the element to update:
90
Enter the new value:
66
Element updated successfully.
Elements in the list: 15 66 45 23 
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
5
Elements in the list: 15 23 45 66
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
7
Minimum element in the list is 15
Maximum element in the list is 66
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
8
Middle element in the list is 23
1.Insert an element at beginning
2.Delete an element
3.Search an element
4.Update an element
5.Ascending order sort
6.Display the elements of the list
7.Find minimum and maximum element in the list
8.Find middle element in the list
9. Exit
Enter your choice:
9
Exiting the program.