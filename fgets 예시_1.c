#include <stdio.h> 
#include <stdlib.h>

void main()
{
	FILE *fp;
	char str[128];
	
	if((fp = fopen ("example.txt", "r")) ==NULL )
	{
		printf("Cannot open the file.\n");
		exit(1);
	}
	while (!feof(fp)) //�Լ��� ������ Ȯ�� 
	{
		if(fgets(str, 126, fp)) // ������ �� , �� , ��� ���� 
		{
		
			printf("%s",str);
		}
		 
	}
	fclose (fp);
}
