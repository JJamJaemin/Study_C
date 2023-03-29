#include <stdio.h>
#include <string.h>

void main()
{
	char kb[50] = "aattggccatgggcccatatgcggcc";
	char *p;
	int i;
	p = kb;
	
	/*p = kb;
	p = strstr(p,"gg");
	printf("%s\n",p);
	p = strstr(p+1,"gg");
	printf("%s\n", p);
	p = strstr(p+1,"gg");
	printf("%s\n",p);*/
	
	for ( i =0 ; i < strlen(kb)-1 ; i++)
	{
		p = strstr(p+i,"gg");
		printf("%s\n", p);
		 
		
	}	

	
}
