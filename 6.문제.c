#include <stdio.h>

int ham;
int p;
int coke;
int set;

int a,b,c;
int min;
int sum;
int d,e,f;

int main()
{
	ham = 4000;
	p = 2000;
	c = 1500;
	 
	printf("[햄버거 %d원, 감자튀김 %d원, 콜라 %d원, 세트 6500원].\n", ham,p,coke);
	
	printf("햄버거 개수\n");
	scanf("%d", &a);
	
	printf("감자튀김 개수?\n"); 
	scanf("%d", &b);
	
	printf("콜라 개수?\n");
	scanf("%d", &c); 
	
	if(a <= b && a <= c) 
	{
		min = a;
	}
	else if(b <= c && b <= a)
	{
		min = b;
	}
	else if (c <= a && c <= b)
	{
		min = c;
	}
	
	d = a - min;
	e = b - min;
	f = c - min;
	sum = min * 6500 + d * 4000 + e * 2000 + f * 1500;

	printf("상품명            단가       수량     금액\n");
	if(min>0)	
	printf("세트             6500         %d      %d\n",min,min*6500);
	if(d>0)
	
	printf("햄버거           4000         %d      %d\n",d,d*4000);
	if(e>0)
	printf("감자튀김         2000         %d      %d\n",e,e*2000);
	if(f>0)
	{
		printf("콜라           1500         %d      %d\n",f,f*1500);
	}
	printf("-------------------------------------------------------\n");
	printf("합계                                  %d\n",sum);
	
	return 0;
}
