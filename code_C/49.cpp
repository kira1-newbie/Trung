// kiem tra mang con lien tiep giua 2 mang 
#include<stdio.h>
#include<conio.h>
int x1[100], x2[100];
int n1,n2;
void nhapmang(int x[100], int &n)
{
	do{
		printf("\nnhap n");
		scanf("%d",&n);
	} while (n<0|| n>100);
	for (int i=0;i<n;i++) {
		printf("a[%d]",i);
		scanf("\n%d",&x[i]);
	}
}
void xuatmang(int x[100], int n){
	for (int i=0;i<n;i++){
		printf("\n%d",x[i]);
	}
}
int ktra_mang(int x1[100],int n1,int x2[100],int n2)
{    int kq=0,a=0,b=0,c,d;
 int i2; int i1;
	if (n1>=n2) { 
    for(int i=0;i<n1;i++){
    	if (x1[i]=x2[0]) { 
		int j=0;
		for (;j<n2;j++){
			if (x1[i+j]!=x2[j])
			break;}
		
		if (j==n2) { kq=1;};} 
	}
}
return kq;
}
main (){
	nhapmang(x1,n1);
	xuatmang(x1,n1);
	nhapmang(x2,n2);
	xuatmang(x2,n2);
	int kt=ktra_mang(x1,n1,x2,n2);
	
	if(kt){printf("mang b la mang con cua a"); }  else {printf("mang b khong phai la mang con cua a"); };
	 
	getch();
	
}
