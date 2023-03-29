#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char c = 0;
	
	FILE* fp = fopen("test.txt", "r");
	//fp 에는 test.txt 의 데이터가 들어있다. 
	if (fp==NULL)
	{
		puts("파일 열기 실패 !");

	}
	
	FILE *fp_2 = fopen("test2.txt", "w");
	while(c!=EOF) //EOF(End Of file 파일이 끝이 아닌동안)
	{
		c = fgetc(fp);
		putchar(c);
		fputc(c, fp_2); 
	}
	
	fclose(fp);
	fclose(fp_2); 

}
