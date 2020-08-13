// Example Program to join two linked lists
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
	elementpntr first, start, last, end, current;

	char word1[10], word2[10];

	int i;

	printf("\nLet's see an example of joining linked lists in action!\nReady?\n");
	printf("\n***\n\nThis is the beginning of the program.\n\n***\n");

	// Generate first linked list
	strcpy(word1, "base");
	first = (elementpntr) malloc(sizeof(element)); 
	last = first;
	for (i=0; i < strlen(word1); i++)
	{
		last -> let = word1[i];
		last -> next = (elementpntr) malloc(sizeof(element));
		last = last -> next;
	}
	last -> next = NULL;

	// Generate second linked list
	strcpy(word2, "ball");
	start = (elementpntr) malloc(sizeof(element)); 
	end = start;
	for (i=0; i < strlen(word2); i++)
	{
		end -> let = word2[i];
		end -> next = (elementpntr) malloc(sizeof(element));
		end = end -> next;
	}
	end -> next = NULL;

	printf("\nHere's what our two linked lists look like.\n");
	printf("The first linked list: \n");
	traverse_print(first);
	printf("And now here's the second linked list: \n");
	traverse_print(start);

	// General code to join the linked lists together
	printf("\nNow let's join these two linked lists together!\n");
	last -> next = start;
	do
	{
		last = last -> next;
	} while (last -> next != NULL);
	start = NULL;
	printf("Here's the traverse_print function output now: \n");
	traverse_print(first);
	printf("\nTogether it forms the word: ");
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
	free(start);

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