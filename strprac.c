//
//  main.c
//  strpractice
//
//  Created by Leah Gaeta on 8/5/20.
//  Copyright © 2020 Leah Gaeta. All rights reserved.
//

#include <stdio.h>
#include <string.h>

// Example program to go over string functions //

int main()
{
    char mystr1[20],
    mystr2[10] = "baseball",
    mystr3[10] = {'G', 'a', 'e', 't', 'a', '\0'},
    mystr4[7] = "loves",
    mystr5[15];

    int num, othernum, newnum;

    printf("\nEnter a string: ");
    scanf("%s", mystr5);

    // Example of strlen()
    num = strlen(mystr5);
    printf("\nYou entered \"%s\" and ", mystr5);
    printf("it is %d characters long.\n", num);
    printf("Note that the length does not include the ");
    printf("end of string sentinel, or null character!\n");

    // Example of strcpy()
    strcpy(mystr1, "Leah");
    printf("\nThe variable 'mystr1' is %s now!\n", mystr1);
    printf("This was done using strcpy");

    // Example of strcat()
    strcat(mystr1, " ");
    strcat(mystr1, mystr3);
    printf("\nUsing strcat, we were able to create the ");
    printf("name %s!\n", mystr1);

    // Example of strcmp
    othernum = strcmp(mystr4, mystr2);
    printf("\nComparing the variables mystr4 and mystr2, ");
    printf("which are \"loves\" and \"baseball\", respectively, ");
    printf("the value from using strcmp() is %d.\n", othernum);

    newnum = strcmp(mystr2, mystr4);
    printf("\nThe other way is %d!\n", newnum);

    printf("\n***\n");
    printf("\nThis is the end of the program.\n");
    printf("\n***\n***");

    return 0;
}