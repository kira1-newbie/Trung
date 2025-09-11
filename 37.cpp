#include <stdio.h>
// // tinh trung binh cong trong mang
// dung trung binh cong= ham
float  tbc(int x[] ,int n){
	int tong=0,j=0;
	for (int i=0;i<n;i++)

	{
	
		tong+=x[i];
	   j=j+1;}
	
 return (float)tong/(float)j;
}
// // tinh trung binh cong trong mang (chi tinh so duong)
float  tbcd(int x[] ,int n){
	int tong=0,j=0;
	for (int i=0;i<n;i++)
	{ if(x[i]>0){
	
		tong+=x[i];
	   j=j+1;}	 
	}
 return (float)tong/(float)j;
}
main(){
	int a[100],tong=0,n,j=0;
	do {
		printf("nhap n");
		scanf("%d",&n);
		
	} while (n<0 || n>100);
	for (int i=0;i<n;i++) {
		printf("\na[%d]",i);
		scanf("%d",&a[i]);}
/*	if (a[i]>0)	{
	tong+=a[i]; j=j+1;z
	}
	float tbc;
	tbc=(float)tong/(float)j; (Dung binh thuong)*/
	printf("trung binh cong=%.2f",tbc(a,n))	;
	printf("trung binh cong=%.2f",tbcd(a,n));

}
