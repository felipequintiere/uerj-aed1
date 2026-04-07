#include <stdio.h>

// com complexidade de espaço 3

int main(void)
{
	int n;
	int f1 = 0;
	int f2 = 1;

	scanf("%d",&n);	
	
	for (; n>2; n--)
	{
		f2 = f1+f2;
		f1 = f2-f1;
	}
	printf("%d\n",f2);

	return 0;
}
