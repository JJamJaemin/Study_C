#include <stdio.h>

void kb(void);
int count = 500; //���� ����  => ������ ���׸�Ʈ�� ���� 
 

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

