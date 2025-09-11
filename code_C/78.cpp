#include<stdio.h>
#include<string.h>
char xoakytuxuongdong(char a[])
{
 size_t len=strlen(a);
 if (a[len-1]!=NULL) a[len-1]=NULL;
}
int ktra_doixung(char a[])
{   int b=0;
    int kq=0;
    size_t len=strlen(a);
	for (int i=0;i<len/2;i++)
	{
		if (a[i]==a[len-1-i])
		b++;
	}
	if (b==(int)(len/2)) kq=1;
	return kq;
}
main()
{
	char a[100];
	fgets(a,sizeof(a),stdin);
	xoakytuxuongdong(a);
	printf("%d",ktra_doixung(a));
	if (ktra_doixung(a)==1) printf("la chuoi doi xung");
	else printf("khong phai la chuoi doi xung");
}
