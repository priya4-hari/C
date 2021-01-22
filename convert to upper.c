#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],p[20];
	int i,j;
	printf("enter string:");
	gets(s);
	i=0;
	j=0;
	while(s[i]!='\0')
	{
		p[j++]=toupper(s[i]);
		i++;
	}
	p[j]='\0';
	printf("the upper case is:");
	puts(p);
}
