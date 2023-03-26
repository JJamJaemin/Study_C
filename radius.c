#include <stdio.h>
#define PI 3.14

float cir_area (int radius);

int main ()
{
	int i;
	int radius;
	
	for( i =0 ; i < 10 ; i++)
	{
		printf("%d - circle : \n", i+1);
		scanf("%d", &radius);
		printf ("%d - circle area is %f\n", i+1 , cir_area(radius));
	}
	return 1;

}

float cir_area(int radius)
{
	float area;
	area = PI*radius*radius;
	
	return area;
}
