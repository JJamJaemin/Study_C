#include <stdio.h>

#define NAME "KBSTAR" 
#define AGE 20
#define JOB "STUDENT"
void myName(void);
void myAge(void);
void myJob(void);

void myName(void)
{
	char name[50];
	printf("Your Name : ");
	gets(name); //name == &name[0]
	printf("Your Name is %s\n", name);
}

void myAge()
{
	int age;
	printf("Your age : ");
	scanf("%d%*c",&age);
	printf("My age is %d\n", age);
}

void myJob()
{
	char job[30];
	printf("Your job? : ");
	gets(job);
	printf("Yout job is %s\n", job);
	
}
