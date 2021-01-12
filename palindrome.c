#include<stdio.h>
#include<string.h>
void main()
{
	char s[30];
	int i,j,n,chk=1;
	printf("enter the string:");
	scanf("%[^\n]",s);
	n=strlen(s)-1;
	for(i=0,j=n;i<n/2;i++,j--)
	{
		if(s[i]!=s[j])
		{
			chk=0;
			break;
		}
	}
	if(chk==1)
		printf("palindrome");
		else
			printf("not palindrome");
}
