/*�ݺ���/��ȯ�� => for �� , while ��
while �� => 2���� type ����

1.while (���ǽ�/�Ǻ���) 
{
	

} 

2.do
{
	
}while(����/�Ǻ���);*/
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
