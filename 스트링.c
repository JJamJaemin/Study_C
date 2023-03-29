#include <stdio.h>
#include <string.h>
/*strlen => string lenth
strcpy => string ccopy
strcat => string concatenate
strcmp => string compare 같으면 0 을 반환
*/
void main()
{
	printf("%d, %d, %d\n", strcmp("Hi","Hi"), strcmp("Hi","hi"), strcmp("hi" ,"Hi"));
}
