// tim uoc so chung lon nhat giua 2 so
/* th1 a=0 b=5 thi uscln=5
   th2 a>b thi a=a-b neu a<b thi b=b-a lap lai cho den khi a=b thi dung lai 
   luc do uscln=a=b sau khi lap */
   #include <stdio.h>
   #include <math.h>
   int main (){
   	int a,b;
   	int uscln;
   	printf("nhap 2 so a va b");
   	scanf("%d%d",&a,&b); 
   	if (a==0) {printf("uscln la%d",b);}
   	if (b==0) {printf("uscln la%d",a);}
   	while (a!=b)   {if (a>b) {a=a-b;}else {b=b-a;}}
   	if (a=b){printf("uscln:%d",a);}
	   }
	   

