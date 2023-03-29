#include <stdio.h>

void main()
{
	int i;
	int kb;
	
	for( i = 0; i < 10; i++)
	{
		printf ("Enter a scharacter\n");
		kb = getchar();
		fflush(stdin);
		printf("%c\n",kb);
	}
}
