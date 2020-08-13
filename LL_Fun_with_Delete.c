// Example of Linked List creation and how to delete any element within a Linked List
// Made by Leah Gaeta, graduate teaching assistant for EK 125 at Boston University



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define type & create linked list with a struct for each element and pointer
typedef struct linked_list
{
	char letter;
	int data;
	struct linked_list *next;
} element;

typedef element * elementptr;

// Function prototype for the trav_print function
void trav_print(elementptr);

int main()
{
	// Inititalization & Declaration here
	elementptr first = NULL,
	current, temp,
	last = NULL;

	char fname[10];

	int i;

	printf("\nLet's see an example of linked lists in action!\nReady?\n");
	printf("\n***\n\nThis is the beginning of the program.\n\n***\n");

	// Use strcpy to copy my name into char[] variable fname
	strcpy(fname, "Leah");

	// Create the linked list!
	first = (elementptr) malloc(sizeof(element)); 
	// (elementptr) is a type cast to change to pointer
	// malloc() is a function that allocates the memory
	// sizeof() is a function that allocates enough bytes to store element
	last = first;
	last -> letter = 'G';
	last -> data = 30;
	last -> next = NULL;

	// Use for loop to create rest of linked list and fill it in with random information
	for (i=0; i < strlen(fname); i++)
	{
		last -> next = (elementptr) malloc(sizeof(element));
		last = last -> next;
		last -> letter = fname[i];
		last -> data = i;
		last -> next = NULL;
	}

	// See what the linked list looks like
	printf("\nHere's what the linked list looks like now: \n");
	trav_print(first);


	// Example of deleting an element from anywhere in a linked list
	printf("\nNow let's see an example of deleting an element from the linked list: \n");

	current = first; // Adjust this as needed for learning
	printf("The current pointer is currently at the element with letter %c and data %d.\n", current -> letter, current -> data); 

	if (current == first)
	{
		first = first -> next;
		free(current);
	}
	else
	{
		temp = first;

		while(temp -> next != current)
		{
			temp = temp -> next;
		}

		temp -> next = current -> next;

		free(current);

		if (temp -> next == NULL)
		{
			last = temp;
		}
	}
	trav_print(first);

	printf("\n***\n\nThis is the end of the program.\n\n***\n");

	free(first);
	free(temp);
	free(last);

	return 0;
}

// Function definition for the trav_print function
void trav_print(elementptr f)
{
	// f signifies the first pointer
	elementptr c; // initialize pointer c for current

	c = f;

	if (c == NULL)
		printf("There is no linked list!\n");
	else
		while (c != NULL)
		{
			printf("The letter is currently %c\n", c -> letter);
			printf("The data is currently %d\n", c -> data);
			c = c -> next;
		}
	printf("\n");
}





