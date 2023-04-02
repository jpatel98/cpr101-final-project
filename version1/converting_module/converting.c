#define _CRT_SECURE_N0_WARNINGS
#include "converting.h"

/* Version 1 */
// Converting V1
void converting()
{ 
	printf("*** Start of Converting Strings to int Demo ***\n");
	char int_string[80]; // character array to store 79 characters and a null operator
	int int_number;		 
	printf("Type the int numeric string (q - to quit): \n");
	gets(int_string); // gets input from user and store ir in 'int_string'
	
	// Use a while loop to repeatedly convert the string to an integer until the user enters 'q' to quit
	while (strcmp(int_string, "q") != 0)
	{														
		int_number = atoi(int_string); // Use atoi() func to convert str to int							 
		printf("Converted number is %d\n", int_number);			 
		printf("Type the int numeric string (q - to quit): \n"); 
		gets(int_string); // gets user input and store in 'int_string										 
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");
}