#include <stdio.h>

float a,b,c;
char ch;

int main()
{
	printf("������ �Է��ϼ���.\n");
	scanf("%f %c %f", &a,&ch,&b);
	
	switch(ch)
	{
		case'+':
			
			printf("%.2f+%.2f=%.2f",a,b,a+b);
			break;
		case'-':
			
			printf("%.2f-%.2f=%.2f",a,b,a-b);
			break;
		case'/':
		    
		    printf("%.2f/%.2f=%.2f",a,b,a/b);
		    break;
		case'*':
		   
		    printf("%.2f*%.2f=%.2f",a,b,a*b);
			break;
		default:
		    printf("�߸� �Է��ϼ̽��ϴ�.");  
	}
	
	return 0;
}
