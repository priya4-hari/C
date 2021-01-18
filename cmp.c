#include<stdio.h>
#include<string.h>
void main()
{
	char x[30],y[]="c is program";
	strcpy(x,"c is program");
	if(strcmp(x,y)==0)
		printf("equal");
		else
			printf("not equal");
	if(strcmp(y,x)==0)
		printf("equal");
		else	
			printf("not equal");	
}
