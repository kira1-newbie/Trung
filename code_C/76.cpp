// ham strrev (reverse a string) dao nguoc chuoi
#include<stdio.h>
#include<string.h>
void dao_chuoi (char a[])
{
	
	size_t len=strlen(a);
    
	for (int i=0;i<len/2;i++)
	{  
		
		char temp=a[len-1-i];
		 a[len-1-i]=a[i];
		 a[i]=temp;
    }
}
main()
{
	char a[100]="toi la trung";
	dao_chuoi(a);
	printf("%s",a);
	printf("/n %s",strrev(a));
}
