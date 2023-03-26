#include <stdio.h>


int main()
{
	int i, j;
	
	for (i = 1; i < 10 ; i++) 
	{
		
		for (j =1 ; j < 10 ; j++)
		{
			if (j==6)
				continue; //break 블록 안 탈출 , continue 도돌이표 뒷일 하지말고 
			printf("%d * %d = %d\n", i, j, i*j); 
		}
		printf("\n");
	}
	return 1;
}

