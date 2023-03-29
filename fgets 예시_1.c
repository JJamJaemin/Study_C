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
	while (!feof(fp)) //함수의 끝인지 확인 
	{
		if(fgets(str, 126, fp)) // 저장할 곳 , 양 , 어디서 부터 
		{
		
			printf("%s",str);
		}
		 
	}
	fclose (fp);
}
