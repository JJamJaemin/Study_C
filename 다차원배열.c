#include <stdio.h>
#include <stdio.h>

void main()
{
	int kb[3][5] = { {1, 11, 111, 1111, 11111}, {2, 22, 222, 2222, 22222}, {3, 33, 333, 3333, 33333} };
	int i, j;
	int *p;
	
	p = &kb[0][0];
	
	
	kb[0] == &kb[0][0];
	kb[1] == &kb[1][0];
	for (i = 0; i < 3; i++)
	{
		for(j = 0 ; j < 5 ; j++ )
		{
			printf("kb[%d][%d] = %d\n", i, j, kb[i][j]);
		}
	 } 
	
}
