#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	char course_name[50];
	struct node *next;
};

typedef struct node Node;

int main(void) {
	Node *head = malloc(sizeof(Node));
	// head->course_name = "CS course"; //error
	strcpy(head->course_name, "CS course");
	head->next = NULL;

	int i;
	int number; // the number of course
	printf("�п�J�ҵ{�ƶq: ");
	scanf("%d", &number);

	Node *current = head;
	for(i = 1; i <= number; i++){
		current->next = malloc(sizeof(Node));

		char name[50]; // string
		printf("Please Enter Course Name %d: ", i);
		fgets(name, sizeof(name), stdin);

		// 1. scanf("%s", name); ���ϥγo�جO�]�����ťժ�����t�@�Ӧr��
		// 2. gets(name) ���ϥγo�جO�]���e���X��

		// current->course_name = name // error
		strcpy(current->course_name, name);
		current = current -> next;
		current -> next = NULL;
	}

	// print all course and clear memory
	current = head;
	Node *temp; // temporary and delete
	i = 1;
	while(current != NULL && i <= number){
	    printf("Course %d is: %s\n", i, current->course_name );
        temp = current->next;
        free(current);
        current = temp;
        i++;
	}
	head = NULL;
	return 0;
}
