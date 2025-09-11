// viet hoa chu cai dau
#include<stdio.h>
#include<string.h>
char chuyen_doi(char a[])
{    
    size_t len=strlen(a);
    int gia_tri;
    int b=0;
    for (int i=0;i<len;i++)
	{
         gia_tri=a[i];
	     if (b==0)
	         {
		
                 if(a[i]>=97&&a[i]<=122)
	             {
		             gia_tri=gia_tri-32;
		             a[i]=gia_tri;
		         } 
		     b=1;
             } 
             else 
        if(a[i]>=65&&a[i]<=90)
        {
        	gia_tri=gia_tri+32;
			a[i]=gia_tri;		
			}
         if (gia_tri==32) {b=0;}
		 
    }
}
main()
{
	char a[100];
	int gia_tri;
    fgets(a,sizeof(a),stdin);
    chuyen_doi(a);
	printf("%s",a);
}
