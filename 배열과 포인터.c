/*�迭 (array) : ������ ����, ������ ������ ������ ���� ������ ���� �� �ִ� Ư���� ������ ����
			int i[20]; -> i[0], i[1], i[2], .....i[19]
			char kb[50];
			float j[25];
			
������ (pointer) : �ּ� ���� ���� ������ ������ Ư���� ����
				char *kb;
				int *kb; 
*/

/*#include <stdio.h>

void main()
{
	int i[5];
	int j;
	
	i[0] = 100;
	i[1] = 200;
	i[3] = 300;
	i[4] = 400;
	i[2] = 500;
	
	for(j = 0; j < 5 ; j++)
	{
		printf("i[%d] = %d\n",j, i[j]);
		
	}
	printf("The size is %d\n", sizeof(i)); 
}*/

#include <stdio.h>

void main()
{
	int kb[10];
	int i;
	
	for ( i = 0; i < sizeof(kb)/sizeof(int); i++) //sizeof(kb);/sizeof(int) = 10
	{
		printf("Enter an integer\n");
		scanf("%d", &kb[i]);
	}
	
	for ( i = 0; i < sizeof(kb)/sizeof(int); i++) 
		printf ("kb[%d] = %d\n", i, kb[i]);
}



/* kb[0] == kb // �迭������ �̸��� �迭�� ������ġ�� �� �� 
 kb[1] == kb+1
 ...*/
 
 
