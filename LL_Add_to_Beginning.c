// Example Program that adds an item to the beginning of a linked list
// Written by Leah Gaeta to help students in the EK 125 course at Boston University

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define everything first
typedef struct linked
{
	char let;
	struct linked *next;
} element;

typedef element * elementpntr;

// Function prototype
void traverse_print(elementpntr);

int main()
{
	// Declarations & Initializations
	elementpntr first, last, current;

	char lname[10];

	int i;

	printf("\nLet's see an example of adding an item to the beginning of a\nlinked list in action! Ready?\n");
	printf("\n***\n\nThis is the beginning of the program.\n\n***\n");

	// Generate initial linked list
	strcpy(lname, "Gaeta");
	first = (elementpntr) malloc(sizeof(element)); 
	last = first;
	for (i=0; i < strlen(lname); i++)
	{
		last -> let = lname[i];
		last -> next = (elementpntr) malloc(sizeof(element));
		last = last -> next;
	}
	last -> next = NULL;

	printf("\nHere's what the linked list looks like.\n");
	traverse_print(first);

	// General code to add an item to the beginning of a linked list
	printf("\nNow let's add to the beginning of the linked list!\n");
	current = first;
	first = (elementpntr) malloc(sizeof(element));
	first -> let = 'L'; // Choosing to add the letter L here
	first -> next = current;

	printf("Here's the traverse_print function output now: \n");
	traverse_print(first);
	printf("\nTogether it forms the name: ");
	current = first;
	while (current -> next != NULL)
	{
		printf("%c", current -> let);
		current = current -> next;
	}
	printf("%c\n", current -> let);

	printf("\n***\n\nThis is the end of the program.\n\n***\n");

	// Free the pointers
	free(first);
	free(last);

	return 0;
}

// Function defintion for traverse_print
void traverse_print(elementpntr f)
{
	elementpntr c;

	c = f;
	printf("The letters are:");
	do
	{
		printf("%3c", c -> let);
		c = c -> next;
	} while (c != NULL);

	printf("\n");
}