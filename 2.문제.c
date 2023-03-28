#include <stdio.h>

int a;

int main()
{
	printf("숫자를 입력하세요\n");
	scanf("%d", &a);
	
	if( a<0 )
	{
		a = a * -1;
	}

	
	printf("절대값은 %d 입니다\n", a);
	
	return 0;
}
