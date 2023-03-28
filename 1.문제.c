#include <stdio.h>

int a,b,c,d;
int avg; 
int sum;
int max;
int min;

int main()
{
	printf("첫번째 숫자를 입력하세요\n");
	scanf("%d", &a);
	
	printf("두번째 숫자를 입력하세요\n");
	scanf("%d", &b);
	
	printf ("세번째 숫자를 입력하세요\n");
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
	
	
	printf("총합은 %d 입니다 \n", sum); 
	printf("평균은 %d 입니다 \n", avg);
	printf("최대값은 %d 입니다 \n", max);
	printf("최소값은 %d 입니다\n", min);
	
	return 0;
}
