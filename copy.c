#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char s[30],d[30];
	printf("enter source string:\n");
	scanf("%[^\n]",s);
	for(i=0;(d[i]=s[i])!='\0';i++);
	d[i]='\0';
	printf("the source string is: %s\n",s);
	printf("the destination string is: %s\n",d);
}
