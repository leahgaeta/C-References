// Example program of a running sum and creating an array of K integers 
// The integers are randomly generated from 5 - 15 inclusive
// Created by Leah Gaeta for BU ENG EK 125 Introduction to Programming Course

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Necessary to have the correct header files for generating random integers

#define K 8 // Adjust this as needed to increase the array size

int main()
{
	int ranint_array[K], runsum = 0, i; 

	// Need to initialize integer array, running sum at zero, and i for the loops!

	srand((time(NULL))); // Set the seed for randon integer generation

	printf("\nThis program uses a running sum to add each integer in an integer array.\n");
	printf("The integers are randomly generated in the range from 5 to 15 inclusive.\n");

	printf("\nThe array is comprised of the following numbers:\n");
	for (i = 0; i < K; i++)
	{
		ranint_array[i] = rand()%11 + 5;
		printf("%5d", ranint_array[i]);
		runsum = runsum + ranint_array[i];
	}

	printf("\n\nThe sum of the above integers is %d.\n", runsum);
	printf("\n***\nThis is the end of the program.\n***\n\n");
	
	return 0;
}
