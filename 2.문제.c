#include <stdio.h>

int a;

int main()
{
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%d", &a);
	
	if( a<0 )
	{
		a = a * -1;
	}

	
	printf("���밪�� %d �Դϴ�\n", a);
	
	return 0;
}
