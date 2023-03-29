#include <stdio.h>

void main()
{
	int a[5] = {10,20,30,40,50};
	int b[2][3] = {{20,40,60}, {30,300,3000}};
	int i, j;
	
	int *p1, *p2[2];
	
	p1 = a;
	p2[0] = b[0]; //b[0] 20狼 林家 蔼 
	p2[2] = b[1]; //b[1] 30狼 林家 蔼 
	
	for ( i =0 ; i < 5 ; i++ )
	{
		printf("p1[%d] = %d\n", i, p1[i]);
	}
	
	for ( i = 0 ; i < 2 ; i ++)
	{
		for ( j = 0 ; j < 3 ; j++)
		{
			printf ("p2[%d][%d] = %d\n", i , j, p2[i][j]);
		}
	}
	
}

