#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

int main() {
    struct student s;	
	char ch[10];
    head = NULL;
	int k;
	do {
		printf("Enter the id\n");
		scanf("%d", &s.id);
		printf("Enter the name\n");
		scanf("%s", s.name);
		printf("Enter the gender\n");
		scanf("%s", s.gender);
		s.link = NULL;
		append(s);
		printf("Do you want to add details of another student? Type Yes/No\n");
		scanf("%s", ch);
	} while (!strcmp(ch, "Yes"));
	printf("The details of the students are\n");
	printf("%4s %10s %7s\n", "ID", "Name", "Gender");
	display();
	printf("Enter the value of k to rotate\n");
	scanf("%d", &k);
	rotate(k);
	return 0;
}

