// TOKENIZING V1
#include "tokenizing.h"

void tokenizing()
{

	printf("*** Start of Tokenizing Words Demo ***\n");

	char words[200]; // declare words as a character array of size 200
	char *word;		 // pointer to a character 'word'
	int w_counter;	 // an variable of type integer 'w_counter' has been declared

	printf("Type a few words separated by space(q - to quit):\n"); 
	gets(words); // this is used to take a string from the user as an user input and store it in the character array words												   
	
	// prompt user until words is other than q
	while (strcmp(words, "q") != 0)
	{							   
		word = strtok(words, " "); 
		w_counter = 1;		
		while (word)
		{														  
			printf("Word is #%d is \'%s\'\n", w_counter++, word); 
			word = strtok(NULL, " ");							 
		}
		printf("Type a few words separated by space(q - to quit):\n"); 
		gets(words);												   
	}

	printf("*** End of the Tokenizing Words Demo ***\n\n"); // this prints the message that tokenizing words demo ends here
}