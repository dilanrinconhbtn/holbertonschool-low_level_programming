#include <stdio.h>
#define NAME printf (__FILE__"\n")
int main(void)
{
	NAME;
	return (0);
}
