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
	 
	printf("[�ܹ��� %d��, ����Ƣ�� %d��, �ݶ� %d��, ��Ʈ 6500��].\n", ham,p,coke);
	
	printf("�ܹ��� ����\n");
	scanf("%d", &a);
	
	printf("����Ƣ�� ����?\n"); 
	scanf("%d", &b);
	
	printf("�ݶ� ����?\n");
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

	printf("��ǰ��            �ܰ�       ����     �ݾ�\n");
	if(min>0)	
	printf("��Ʈ             6500         %d      %d\n",min,min*6500);
	if(d>0)
	
	printf("�ܹ���           4000         %d      %d\n",d,d*4000);
	if(e>0)
	printf("����Ƣ��         2000         %d      %d\n",e,e*2000);
	if(f>0)
	{
		printf("�ݶ�           1500         %d      %d\n",f,f*1500);
	}
	printf("-------------------------------------------------------\n");
	printf("�հ�                                  %d\n",sum);
	
	return 0;
}
