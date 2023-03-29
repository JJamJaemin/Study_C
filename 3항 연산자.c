#include <stdio.h>

// ? => x > 0 : 1 : 0; //3항 연산자 참이면 첫번째 참이 아니면 두번째 값 

void main()
{
	int a;
	int i;
	
	printf("Enter an integer\n");
	scanf("%d", &a);
	
	i = a > 10 ? 1 : 0; //3항 연산자
	/*if(a>10)
		i = 1;
	else
		i = 0; */ 
	printf("i = %d", i );	 
 } 
