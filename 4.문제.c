#include <stdio.h>

int a,b,c,d,e;

int get_perimeter();

int main()
{
	printf("����?\n");
	scanf("%d", &a);
	printf("����?\n");
	scanf("%d", &b);
	get_perimeter();
	
	printf("���簢���� �ѷ��� %d �Դϴ�.\n",e);
	
	return 0;
}

int get_perimeter()
{
	c = 2*a;
	d = 2*b;
	e = c+d;
}
