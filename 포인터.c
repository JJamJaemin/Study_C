#include <stdio.h>

void main()
{
	int count[10] = {10,20,30,40,50,60,70,80,90,100};
	int *p;
	int i;
	
	p = count; // p = %count[0];
	for ( i = 0; i < sizeof(count)/sizeof(int); i++)
	{
		printf("%d, %d, %d, %d\n", count+i, p+i, count[i], *(p+i));
	}
	
	
}
