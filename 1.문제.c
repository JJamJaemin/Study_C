#include <stdio.h>

int a,b,c,d;
int avg; 
int sum;
int max;
int min;

int main()
{
	printf("ù��° ���ڸ� �Է��ϼ���\n");
	scanf("%d", &a);
	
	printf("�ι�° ���ڸ� �Է��ϼ���\n");
	scanf("%d", &b);
	
	printf ("����° ���ڸ� �Է��ϼ���\n");
	scanf("%d", &c);
	
	if( a > b && a > c )
	{
		max=a;
	}
	if( b > a && b > c )
	{
		max=b;
	}
	if( c > a && c > b )
	{
		max=c;
	}
	if( a < b && a < c )
	{
		min=a;
	}
	if( b < a && b < c )
	{
		min=b;
	}
	if( c < a && c < b )
	{
		min=c;
	}
	sum = a + b + c;
	avg = sum / 3;
	
	
	printf("������ %d �Դϴ� \n", sum); 
	printf("����� %d �Դϴ� \n", avg);
	printf("�ִ밪�� %d �Դϴ� \n", max);
	printf("�ּҰ��� %d �Դϴ�\n", min);
	
	return 0;
}
