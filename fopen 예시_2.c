#include <stdio.h>

int main()
{
	FILE *fp, *fp2;
	
	if ((fp = fopen("example.txt", "w")) == NULL)
	{
		printf("���� �б� ����! \n");
		return 0;
	}
	
	fputs("�ȳ��ϼ��� ������ \n jaemin �Դϴ�.\n", fp);
	fclose (fp);
	
	if((fp2 = fopen ("example.txt", "a")) == NULL) //a �� ������ �߰���Ŵ  
	{
		printf("���� �б� ����!\n");
		return 0 ;
		
	}
	
	fputs("�� �׷� �ȳ�?",fp2);
	fclose (fp2);
	return 0; 
}
