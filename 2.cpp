#include<stdio.h>
#include<string.h>
#include<ctype.h>
int chuoidoixung(char a[])
{
	int x=strlen(a);
	strupr(a);
	for(int i=0;i<strlen(a);i++)
	 if(a[i]!=a[x-i-1]) return 0;
	return 1;
}
void ktmax(char a[],char &b,int &x)
{
	int d;
	x=0;
	int i,j;
	for(i=0;i<strlen(a)-1;i++)
		{
			d=0;	
		for(j=i;j<strlen(a);j++)
			if(a[i]==a[j]) d++;
			if(d>x)
			{
				x=d;
				b=a[i];
			}
		}
}
int demx(char a[],char x)
{
	x=toupper(x);
	int d=0;
	for(int i=0;i<strlen(a);i++)
	 if(x==a[i]) d++;
	return d;
}
int main()
{
	char a[100];
	char b;
	char n;
	int x;
	printf("Nhap chuoi: ");
	gets(a);
	printf("%s\n",a);
	if(chuoidoixung(a)==1) printf("Chuoi tren doi xung");
	else printf("Chuoi tren khong doi xung");
	ktmax(a,b,x);
	printf("\nKy tu xuat hien nhieu nhat %c\nso lan xuat hien:%d ",b,x);
		fflush(stdin);
	printf("\nNhap ky tu can tim ");
	scanf("%c",&n);
	printf("so lan xuat hien cua ky tu do la: %d",demx(a,n));
}
