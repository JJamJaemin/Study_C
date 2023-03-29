#include <stdio.h>

int main()
{
	FILE *fp, *fp2;
	
	if ((fp = fopen("example.txt", "w")) == NULL)
	{
		printf("파일 읽기 오류! \n");
		return 0;
	}
	
	fputs("안녕하세요 여러분 \n jaemin 입니다.\n", fp);
	fclose (fp);
	
	if((fp2 = fopen ("example.txt", "a")) == NULL) //a 는 파일을 추가시킴  
	{
		printf("파일 읽기 오류!\n");
		return 0 ;
		
	}
	
	fputs("어 그래 안녕?",fp2);
	fclose (fp2);
	return 0; 
}
