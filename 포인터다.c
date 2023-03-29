#include<stdio.h>
#include<string.h>

void swap_1 (int, int); //call by value
void swap_2 (int *, int *); //call by reference

void main()
{
	int a, b;
	a = 100, b = 200;
	swap_1 (a, b);
	printf ("a = %d, b = %d\n", a,b);
	swap_2 (&a, &b);
	printf("a = %d, b = %d\n", a, b);

}

void swap_1 (int i, int j)
{
	int tmp;
	tmp = i;
	i = j;
	j = tmp;
}

void swap_2 (int *i, int *j)
{
	int tmp;
	tmp = *i;
	*i = *j;
	*j = tmp;
}
