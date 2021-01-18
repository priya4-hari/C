#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],c[30];
	int i;
	printf("the string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	c[i]=isupper(s[i]);
	printf("the string is:%d",c);
}
