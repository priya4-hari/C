#include<stdio.h>
int square(int);
void main()
{
	int x=2,y;
	square(x);
	printf("%d",square(x));
}
inline int square(int x)
{
	return(x*x);
}
