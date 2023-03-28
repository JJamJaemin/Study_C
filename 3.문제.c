#include <stdio.h>

float a,b,c;
char ch;

int main()
{
	printf("수식을 입력하세요.\n");
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
		    printf("잘못 입력하셨습니다.");  
	}
	
	return 0;
}
