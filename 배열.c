#include <stdio.h>

void main()
{
	int count[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	char kb[6] ={'K','B','S','T','A','R'};
	char kb_1[6] = "Hello";
	int i;
	char *p; //∆˜¿Œ≈Õ 
	
	p = kb;
	
	for ( i=0 ; i < sizeof(kb) ; i++)
	{
		printf("kb[%d] = %c, %d, %d\n", i, kb[i], &kb[i], kb+i);
	}
	
	for (i=0 ; i<sizeof(kb); i++)
	{
		printf("%s\n", p+i);
	}
	
}
