#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *arr = (int *)malloc(sizeof(int)*5); //void *malloc (size_t sz)
	int i;
	
	if (arr ==NULL)
	{
		printf ("malloc rttot!\n");
		exit(1);
		
		
	}
	for (i = 0; i<5 ; i++)
	{
		arr[i] = i * 10; // *(arr+i) = i*10 °ú°°´Ù 
		
	}
	for ( i = 0; i < 5 ; i++)
	{
		printf ("arr[%d] = %d\n", arr[i]);
	}
}
