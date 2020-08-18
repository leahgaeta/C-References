// Example program of creating a struct to store baseball stats
// Also provides examples of prompting a user to input information, void 
// functions, and selection statements
// Created by Leah Gaeta for BU ENG EK 125 Introduction to Programming Course

#include <stdio.h>
#include <string.h>
#include <time.h>

#define N 13 // Number of position players
#define K 12 // Number of pitchers
// Adjust these for the number of position players and pitchers need to enter

typedef struct
{
	char po_name[25];
	float avg;
	int hr;
} position_rec; 
// Define struct of position players with name, batting average & homeruns

typedef struct
{
	char pi_name[25];
	float era;
	float ip;
} pitcher_rec; 
// Define struct of pitchers with name, earned run average and innings pitched

void delay(int); // Adding a delay function to make the program more user friendly

int main()
{
	position_rec position_players[N]; // Position Players struct
	pitcher_rec pitchers[K]; // Pitchers struct
	char role[3], city[20]; // Role as defined by user input & team city
	int season, i, po_count = 0, pi_count = 0; // Initialize & declare integers

	printf("\nThis is an example program of defining a struct and using\n");
	printf("user input to enter baseball data.\n\n");
	delay(1);

	printf("Which season are you entering statistics for? Enter the year: ");
	scanf("%d", &season);
	fflush(stdin); // Always flush after input just to be safe

	printf("\nWhich team are you entering statistics for? Type the team's city: ");
	scanf("%s", city);
	fflush(stdin); // Always flush after input just to be safe
	delay(2);

	printf("\nYou are about to enter %d players, %d of whom are position players\n", (N+K), N);
	printf("and %d of whom are pitchers.\n\n", K);
	printf("***\n");

	for (i = 0; i < (N+K); i++)
	{
		delay(2);
		printf("\nAre you entering stats for a position player or a pitcher?\n");
		printf("Type 'po' for position player or 'pi' for pitcher: ");
		scanf("%s", role);

		if (strcmp(role, "po") == 0 || strcmp(role, "PO") == 0) // Use strcmp and if equal to 0 then will run
		{
			fflush(stdin); // Always flush after input just to be safe
			printf("...");
			printf("\nEnter the position player's name: ");
			scanf("%s", position_players[po_count].po_name);
			fflush(stdin); // Always flush after input just to be safe
			printf("Enter %s's ", position_players[po_count].po_name);
			printf("batting average: ");
			scanf("%f", &position_players[po_count].avg);
			fflush(stdin); // Always flush after input just to be safe
			printf("Enter %s's ", position_players[po_count].po_name);
			printf("homeruns hit: ");
			scanf("%d", &position_players[po_count].hr);
			fflush(stdin); // Always flush after input just to be safe
			po_count++;
			if (po_count == N)
				{
					printf("\n...\nFYI, you've reached the maximum number of position players to be entered.\n");
				}
			printf("...\n");
		}
		
		else
		{
			if (strcmp(role, "pi") == 0 || strcmp(role, "PI") == 0) // Use strcmp and if equal to 0 then will run
			{
				fflush(stdin); // Always flush after input just to be safe
				printf("...");
				printf("\nEnter the pitcher's name: ");
				scanf("%s", pitchers[pi_count].pi_name);
				fflush(stdin); // Always flush after input just to be safe
				printf("Enter %s's ", pitchers[pi_count].pi_name);
				printf("earned run average: ");
				scanf("%f", &pitchers[pi_count].era);
				fflush(stdin); // Always flush after input just to be safe
				printf("Enter %s's ", pitchers[pi_count].pi_name);
				printf("total innings pitched: ");
				scanf("%f", &pitchers[pi_count].ip);
				fflush(stdin); // Always flush after input just to be safe
				pi_count++;
				if (pi_count == K)
				{
					printf("\n...\nFYI, you've reached the maximum number of pitchers to be entered.\n");
				}
				printf("...\n");
			}
			
			else
			{
				printf("\nIncorrect input. Try again, please.\n");
				fflush(stdin); // Always flush after input just to be safe
				i--; // Decrement i so that the loop runs again
			}
		}
	}

	delay(2);
	printf("\n+++\n");
	printf("\nThese are the stats for %s's %d season:\n", city, season);
	printf("\nPitchers...\n");
	printf("          Name             ERA           IP\n");
	for (i = 0; i < K; i++)
	{
		printf("%-25s %5.2f %12.1f\n", pitchers[i].pi_name, pitchers[i].era, pitchers[i].ip);
	}
	printf("\nPosition Players...\n");
	printf("          Name             AVG           HR\n");
	for (i = 0; i < N; i++)
	{
		printf("%-25s %5.3f %12d\n", position_players[i].po_name, position_players[i].avg, position_players[i].hr);
	}

	delay(3);
	printf("\nChallenge for next time... make this a linked list!\n");
	delay(1);
	printf("\n***\nThis is the end of the program.\n***\n\n");
	
	return 0;
}

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