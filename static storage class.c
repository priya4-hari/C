#include<stdio.h>
void main()
{
	void show(void);
	printf("the first show()");
	show();
	printf("\nthe second show()");
	show();
	printf("\nthe third show()");
	show();
}
void show(void)
{
	static int i;
	printf("i=%d",i);
	i++;
}
