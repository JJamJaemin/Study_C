#include <stdio.h>

// ? => x > 0 : 1 : 0; //3�� ������ ���̸� ù��° ���� �ƴϸ� �ι�° �� 

void main()
{
	int a;
	int i;
	
	printf("Enter an integer\n");
	scanf("%d", &a);
	
	i = a > 10 ? 1 : 0; //3�� ������
	/*if(a>10)
		i = 1;
	else
		i = 0; */ 
	printf("i = %d", i );	 
 } 
