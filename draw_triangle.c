// Example Program that draws a 45-45-90 triangle using a nested for loop 
// Written by Leah Gaeta to help students in the EK 125 course at Boston University

#include <stdio.h>

#define Side 5 // Side length can be adjusted

void draw_me(char, int);

int main()
{
	char symbol;

	printf("\nHere's see an example of drawing a triangle! Ready?\n");
	printf("\n***\n\nThis is the beginning of the program.\n\n***\n");

	printf("Enter a symbol on your keyboard to draw with: ");
	scanf("%c", &symbol);

	// Function draw me to create a triangle using defined dimensions
	draw_me(symbol, Side);

	// Flush the input buffer
	fflush(stdin);

	printf("\n***\n\nThis is the end of the program.\n\n***\n");

	return 0;
}

void draw_me(char sym, int side_len)
{
	int i, j;

	for (i = 1; i <= side_len; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%3c", sym);
		}
		printf("\n");
	}
}