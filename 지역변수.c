#include <stdio.h>

void kb(void);
int count = 500; //전역 변수  => 데이터 세그먼트에 저장 
 

void main()
{
	
	printf("count : %d, %p\n",count, &count);
	kb();
	printf("count : %d, %p\n ",count, &count);
}

void kb(void)
{
		
	printf("count in kb : %d, %p\n",count ,&count);
}

