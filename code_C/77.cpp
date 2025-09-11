// tim kiem trong chuoi strchr a character of string (ky tu trong chuoi) 
#include<stdio.h>
#include<string.h>
char* my_strchr(char a[], char b)
{
	size_t len=strlen(a);
	for (int i=0;i<len;i++)
	{
		if(a[i]==b)
		{
		return &a[i];
	}
	}
}
main()
{
	char a[100];
	char *b,c;
	printf("nhap a");
	fgets(a,sizeof(a),stdin);
	printf("\nnhap ky tu c can tim");
	scanf("%c",&c);
	printf("\n%s",a);
	printf("\n%s",my_strchr(a,c));
	
}
