#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *f;
	f=fopen("E:/kq.txt","wb");
	if(f==NULL)
	{
		printf("Loi tao, mo file");
		exit(1);
	}
	fprintf(f,"1");
	fclose(f);
}
