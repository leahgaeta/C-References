// Example C program of initializing a linked list & using random integers
// Created by Leah Gaeta for BU ENG EK 125 course

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The above our header files that are needed for the generation of linked lists and random integers

typedef struct linked
{
	int numbers;
	struct linked *next;
} element;

typedef element * elementptr;

// The above defines the structure for the linked list and the pointer

int main()
{
	int i, randnum;

	elementptr first, last;

	srand(time(NULL)); // This is necessary for setting the seed to generate random integers

	printf("\nThis program will initialize a linked list to have\n");
	printf("the number of elements equal to a random integer that\n");
	printf("is generated in the range from 5 to 15, storing the\n");
	printf("numbers of the integers up to that generated value as\n");
	printf("members in that structure.\n");

	randnum = rand()%11 + 5; // Generates the random integer value
	// General formula for generating random integers:
	// rand()%(MAX - MIN + 1) + MIN

	first = (elementptr) malloc(sizeof(element));
	last = first;
	// Allocates memory

	last -> numbers = 1;
	// First member will have value of 1

	for (i = 5; i <= randnum; i++)
	{
		last -> next = (elementptr) malloc(sizeof(element));
		// Creates more "space" for the next element in the LL
		last = last -> next;
		// Moves last pointer over
		last -> numbers = i;
		// Stores the value of i in the member
		last -> next = NULL;
		// To maintain LL integrity, must make the last pointer pointing to last element
	}

	printf("\nYou just successfully generated a linked list of %d elements!\n", randnum);
	printf("\n***\n");
	printf("This is the end of the program.\n***\n\n");

	free(first);
	free(last);
	// Important to free the pointers at the end

	return 0;
}