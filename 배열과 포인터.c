/*배열 (array) : 일종의 변수, 동일한 데이터 유형의 값을 여러개 가질 수 있는 특수한 형태의 변수
			int i[20]; -> i[0], i[1], i[2], .....i[19]
			char kb[50];
			float j[25];
			
포인터 (pointer) : 주소 값을 변수 값으로 가지는 특수한 변수
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



/* kb[0] == kb // 배열변수의 이름은 배열의 시작위치의 주 소 
 kb[1] == kb+1
 ...*/
 
 
