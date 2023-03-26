/*반복문/순환문 => for 문 , while 문
while 문 => 2가지 type 존재

1.while (조건식/판별식) 
{
	

} 

2.do
{
	
}while(조건/판별식);*/
#include <stdio.h>

int main()
{
	char a;
	int i;
	i = 0;
	
	do
	{
		printf("Enter a charater");
		scanf("%c", &a);
		if (a>='0'&& a<= '9')
			printf("You entered a digit !!\n");
		else
			printf("Not digit !!!!\n");
		
	}while (a !='?');
	
	return 0;
 } 
