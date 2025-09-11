// noi 2 chuoi 
#include<stdio.h>
#include<string.h>
void strcat1(char s_1[],char s_2[])
{
	size_t len1= strlen(s_1); 
	int len2=0;
	while (s_2[len2]!=NULL)
	{
		s_1[len1]=s_2[len2];
		len2++;
		len1++;
	}
	
	
}
main()
{
	char s_1[100]="toi la ";
	char s_2[10]="      bim";
	strcat1(s_1,s_2);
	puts(s_1);
}
