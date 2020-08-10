// Example of Traversing Linked List


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linked_list
{
	char data;
	struct linked_list *next;
}	element;
typedef element *elementptr;

void trav_print(elementptr);

int main()
{
	elementptr first = NULL,
				last = NULL;
	int i;
	char myword[20] = "Lake Tahoe";

	first = (elementptr) malloc(sizeof(element));
	last = first;
	first -> data = myword[0];

	for (i = 1; i < strlen(myword); i++)
	{
		last -> next = (elementptr) malloc(sizeof(element));
		last = last -> next;
		last -> data = myword[i];
	}

	last -> next = NULL;
	trav_print(first);

	free(first);
	free(last);

	return 0;
}

void trav_print(elementptr fir)
{
	elementptr current;

	current = fir;
	if (current == NULL)
		printf("There is no linked list!\n");
	else
	{
		while (current != NULL)
		{
			printf("The data value is %c\n", current -> data);
			current = current -> next;
		}
	}
}