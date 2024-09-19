#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int id;
	char name[10];
	char gender[10];
	struct student * link;
};
struct student *head;
void append(struct student);
void rotate(int);
void display();