#include <stdio.h>

int a,b,c,d,e;

int get_perimeter();

int main()
{
	printf("가로?\n");
	scanf("%d", &a);
	printf("세로?\n");
	scanf("%d", &b);
	get_perimeter();
	
	printf("직사각형의 둘레는 %d 입니다.\n",e);
	
	return 0;
}

int get_perimeter()
{
	c = 2*a;
	d = 2*b;
	e = c+d;
}
