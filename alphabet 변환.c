#include <stdio.h>

int main()
{
	int ch;
	
	for ( ;ch != '?'; )
	{
		printf("Enter a character =>");
		scanf("%c", &ch);
		fflush(stdin); //Ã»¼Ò
		if( (ch >= 'a') && (ch <= 'z')) 
		{
			ch = ch - ('a'-'A');
			printf("%c\n", ch);
		}
		else if ((ch >= 'A') && (ch <= 'z'))
		{
			ch = ch + ('a'-'A');
			printf("%c\n",ch);
		}
		else
		{
			printf("Not Alphabet - %c\n", ch);
		}
	}
}
