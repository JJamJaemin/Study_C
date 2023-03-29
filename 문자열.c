#include <stdio.h>
 // '/0' == NULL
void main()
{
	char kb[30];
	
	printf("Enter a string\n");
	gets(kb+5);
	 
	
	puts(kb+10);
	
	kb[5] = NULL; //'\0';
	puts(kb); 
}
