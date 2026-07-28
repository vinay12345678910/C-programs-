#include<stdio.h>
#include<string.h>

int main()
{
	char word[50];

	printf("Enter word: ");
	fgets(word, 50, stdin);
	word[strlen(word) - 1] = '\0';

	int consonants = 0;
	int vowels     = 0;
	int digits     = 0;
	int space      = 0;
	int i;

	for(i = 0 ; word[i] != '\0' ; i++)
	{
		if(word[i] == 'a'||
		        word[i] == 'e'||
		        word[i] == 'i'||
		        word[i] == 'o'||
		        word[i] == 'u'||
		        word[i] == 'A'||
		        word[i] == 'E'||
		        word[i] == 'I'||
		        word[i] == 'O'||
		        word[i] == 'U')
		{
			vowels++;
		}
		else if('a' <= word[i] && 'z' >= word[i] ||
		        'A' <= word[i] && 'Z' >= word[i] )
		{
			consonants++;
		}
		else if('0' <= word[i] && '9' >= word[i])
		{
		    digits++;
		}
		else if(word[i] == ' ')
		{
		    space++;
		}
	}
	printf("vowels = %d\n",vowels);
	printf("consonants = %d\n",consonants);
	printf("digits = %d\n",digits);
	printf("space = %d\n",space);
	
	return 0;
}








