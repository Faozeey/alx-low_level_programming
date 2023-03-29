#include <stdio.h>

#int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* write your line of code here...
* Note that:
* - do not use a
* - do not modify p
* - you have only one statement
* - you are not allowed to code anything outside this line of  code
* - Return: void
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
