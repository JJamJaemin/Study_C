#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	char c = 0;
	
	FILE* fp = fopen("test.txt", "r");
	//fp ���� test.txt �� �����Ͱ� ����ִ�. 
	if (fp==NULL)
	{
		puts("���� ���� ���� !");

	}
	
	FILE *fp_2 = fopen("test2.txt", "w");
	while(c!=EOF) //EOF(End Of file ������ ���� �ƴѵ���)
	{
		c = fgetc(fp);
		putchar(c);
		fputc(c, fp_2); 
	}
	
	fclose(fp);
	fclose(fp_2); 

}
