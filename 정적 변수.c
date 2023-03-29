#include <stdio.h>
void hap(int n);

int main()
{
	int i;
	
	for(i=1; i<=5; i++)
		hap(i);
	return 0;
 } 
 
 void hap(int n)
 {
 	int sum1 = 0;
 	static int sum2 = 0;
 	
 	sum1 += n;
 	sum2 += n;
printf ("sum1: %d, sum2: %d\n", sum1 , sum2);
printf ("sum1: %p, sum2: %p\n", &sum1,&sum2);
 }
