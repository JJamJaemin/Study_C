#include <stdio.h>

void main()
{
	struct student_info
	{
		char name[30];
		char dept[50];
		char gender;
		int age;
		char id[9];
		char address[60];
	};
	int i;
	/*typedef struct student_info KB; //�̸� ������ struct student_info -> KB 
	typedef unsigned int u_1;
	KB a, b, c; // �迭�ε� ��밡�� ex) a[3] 
	
	strcpy (a.name, "jamin");
	strcpy (a.dept, "����Ʈ������Ű��а�");
	a.gender = 'M';
	a.age  = 20;
	 //�迭�� ������ ������ ������ Ÿ�� -> ����ü�� �غ� */
	struct student_info kb[3];
	printf ("%d, %d, %d\n", sizeof(struct student_info), sizeof(kb), sizeof(kb)/sizeof(struct student_info));
	
	for ( i = 0; i < sizeof(kb)/sizeof(struct student_info); i++)
	{
		printf("Enter your name => ");
		gets (kb[i].name);
		printf("Enter your department => ");
		gets (kb[i].dept);
		printf("Enter your gender (F/M) => ");
		scanf("%c%*c", &kb[i].gender);
		printf("Enter your age => ");
		scanf("%d%*c", &kb[i].age);
		printf ("Enter your student ID => ");
		gets (kb[i].id);
		printf("Enter your addrdss => ");
		gets(kb[i].address);
	}
	
	for (i = 0 ; i < sizeof(kb)/sizeof(struct student_info); i++)
	{
		printf("%s\n", kb[i].name);
		printf("%s\n", kb[i].dept);
		printf("%c\n", kb[i].gender);
		printf("%d\n", kb[i].age);
		printf("%s\n", kb[i].id);
		printf("%s\n", kb[i].address);
		printf("===============\n");
	}
} 
