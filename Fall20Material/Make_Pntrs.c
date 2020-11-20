// Example program of initializing pointer variables and creating a function
// to initialize both using DMA and inserting data into these allocated places
// Created by Leah Gaeta for BU ENG EK 125 Introduction to Programming Course

#include <stdio.h>
#include <stdlib.h>
// Necessary to include these header files for dynamic memory allocation

void makespace(char **, int **, float **);
// The function prototype must be before int main()

int main()
{
	char *charptr;
	int *intptr;
	float *floatptr;
	// Initialize the pointer variables needed to pass in the function makespace()

	printf("\nThis program uses a function to initialize pointer variables using\n");
	printf("Dynamic Memory Allocation (DMA).\n");
	printf("The values in these allocated places are arbitrarily chosen in the function.\n");

	makespace(&charptr, &intptr, &floatptr);
	// Notice the '&' before the pointer variables because we are passing the 
	// addresses of these pointer variables to the function makespace()

	printf("\nHere's what each pointer points to:\n");
	printf("charptr points to %c\n", *charptr); // The '*' before charptr dereferences it
	printf("intptr points to %d\n", *intptr); // The '*' before intptr dereferences it
	printf("floatptr points to %.2f\n", *floatptr); // Use '*' to dereference

	printf("\n***\nThis is the end of the program.\n***\n\n");

	free(charptr);
	free(intptr);
	free(floatptr);
	// Important to free pointers at the end!

	return 0;
}

void makespace(char **cpointer, int **ipointer, float **fpointer) // The function header with body beneath
{
	*cpointer = (char *) malloc(sizeof(char));
	*ipointer = (int *) malloc(sizeof(int));
	*fpointer = (float *) malloc(sizeof(float));
	// These create space for data and values!
	// Notice the derefencing before cpointer, ipointer, and fpointer

	**cpointer = 'L';
	**ipointer = 30;
	**fpointer = 4.0;
	// This inserts values/data in these spaces
	// Notice the double dereferencing to put values in!
}