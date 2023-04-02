#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

/* Version 1 */
// Fundamentals V1
void fundamentals()
{
	printf("*** Start of Indexing Strings Demo ***\n");

	char buffer1[80];	   // create a character array to store input string
	char num_input[10];	   // create a character array to store user input position number
	unsigned int position; // create an unsigned integer variable to store the position

	printf("Type not empty string (q - to quit):\n");
	printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
	gets(buffer1); // get user input string and store in buffer1

	// Use a while loop to repeatedly find the character at the entered position until the user enters 'q' to quit
	while (strcmp(buffer1, "q") != 0)
	{
		printf("Type the character position within the string:\n");
		gets(num_input);			// get user input position and store in num_input
		position = atoi(num_input); // convert user input to integer and store in position

		// check if the entered position is within the range of the input string
		if (position >= strlen(buffer1))
		{
			position = strlen(buffer1) - 1; // set position to the last index of the string if it exceeds the range
			printf("Too big... Position reduced to max. available\n");
		}

		// print the character at the entered position
		printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
		printf("Type not empty string (q - to quit):\n");
		// Displaying the range of positions available
		printf("01234567890123456789012345678901234567890123456789012345678901234567890123456789\n");
		gets(buffer1); // get the next input string and store in buffer1
	}
	printf("*** End of Indexing Strings Demo ***\n\n");
}