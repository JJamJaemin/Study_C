#include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	
	//증감연산자 => i++ i-- --i ++i
	i = 5;
	
	sum = 7 + i--; 
	printf ("sum = %d, i = %d\n", sum++, i);
	printf("sum = %d\n", sum);
	 
	return 1; 

}
