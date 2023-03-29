#include <stdio.h>
#include <string.h>

void main()
{
	struct KB
	{
		char name[30];
		char gender;
		int age;
	};
	
	
	struct KB a;
	
	printf("Enter the name\n");
	gets(a.name);
	
	printf("Enter the gender\n");
	scanf("%c", &a.gender);
	
	a.age = 16;
	
	printf("%s, %s, %d", a.name, a.gender, a.age);
	
}
