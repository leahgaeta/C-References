// Example program showing math operations in C
// Created by Leah Gaeta for BU ENG EK 125 Introduction to Programming Course

#include <stdio.h>
#include <math.h>
#include <time.h> // Need this for the function, don't worry for now

// Don't worry about the function prototype below yet if you're just starting out
void delay(int);

int main()
{
	float c_result;

	delay(2);
	printf("\nThis is an introductory program to give students an idea of how math");
	printf("\nworks in C!\n");

	delay(3);

	printf("Notice we need the math header file for some of these operations!\n");

	delay(2);
	printf("\n...\n");
	delay(2);

	printf("\nHere are some need-to-know examples!\n");
	delay(2);

	printf("\n!5 will give you %d\n", !5);
	delay(3);
	printf("\n1/5 == 0.20 will give you %d\n", (1/5 == 0.20));
	delay(3);
	printf("\n'b' < 'a' will give you %d\n", ('b' < 'a'));
	delay(3);
	printf("But 'a' < 'b' will give you %d!\n", ('a' < 'b'));
	delay(3);
	printf("\n5 != 2+3 will give you %d\n", (5 != 2+3));
	delay(3);
	printf("\n-10 < -5 < 0 will give you %d\n", (-10 < -5 <0));
	delay(2);
	printf("Think about that. Why?\n");
	delay(5);
	printf("\n4 < 3 || 3 < 4 will give you %d\n", (4 < 3 || 3 < 4));
	delay(2);
	printf("Think about this also. Why?\n");
	delay(5);
	printf("\nNow assume that we have a float variable c_result declared in int main()\n");
	delay(3);
	c_result = pow(5,2);
	printf("\nc_result = pow(5,2) will give you %.1f\n", pow(5,2));
	delay(3);
	c_result = 1/5;
	printf("\nc_result = 1/5 will give you %.1f\n", c_result);
	delay(3);
	c_result = floor(4.9);
	printf("\nc_result = floor(4.9) will give you %.1f\n", c_result);
	delay(3);
	printf("\nAnd finally,\n");
	c_result = cos(0);
	printf("c_result = cos(0) will give you %.1f\n", c_result);
	
	delay(4);
	printf("\nChallenge for next time... make your own mathematical operations!\n");
	printf("Try type-casting!\n");
	delay(2);
	printf("\n***\nThis is the end of the program.\n***\n\n");
	
	return 0;
}

// Don't worry about the function below yet if you're just starting out
void delay(int no_sec) 
{ 
	int milliseconds = CLOCKS_PER_SEC * no_sec; 
	// Converting time into milli_seconds
	clock_t start_time = clock();
	// Storing start time 

	while (clock() < start_time + milliseconds)
	// looping till required time is not achieved 
        ; 
}