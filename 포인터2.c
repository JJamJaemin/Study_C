#include <stdio.h>

void main()
{
	char address[100] = "Seoul Jonogu KBStar-dong 178-2";
	char *p;
	int i;
	
	
	printf("address : %s\n", address);
	p = address;
	*(p + 11) = '\0';
	
	printf("address : %s ", address);
	
	
}
