#include<stdio.h>
void main()
{
	int x=3;
	printf("\n in outer block x=%d",x);
	{
		int x=5;
		printf("\n in inner block x=%d",x);
	}
	printf("\n in outer block x=%d",x);
}
