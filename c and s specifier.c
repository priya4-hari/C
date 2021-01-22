#include<stdio.h>
int main()
{
	int i;
	char c,s[30];
	printf("enter character:");
	scanf("%c",&c);
	printf("enter string:");
	i=0;
	while(s[i]!='\0')
	{
	scanf("%s",s);
	i++;
	}
	printf("the character is:%c",c);
	printf("the string is:%s",s);
	return 0;
}
