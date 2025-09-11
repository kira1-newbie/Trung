#include <stdio.h>
// sap xep tang dan ,giam dan trong mang
void thaydoi(int &a,int &b)
{ int tam;
    tam=a;
	a=b;
	b=tam;
}
void  tangdan(int x[],int n){
	int j,i;
	int h;
	for ( j=0;j<n;j++){ 
	for ( i=1+j;i<n;i++) { 
	if (x[j]>x[i]) { h=x[j];x[j]=x[i]; x[i]=h; } 
	}
}
}
void  giamdan(int x[],int n){
	int j,i;
	int h;
	for ( j=0;j<n-1;j++){ 
	h=j;
	for ( i=1+j;i<n;i++) { 
	if (x[i]>x[h]) h=i;  
	}
	thaydoi(x[j],x[h]);
}
}
void printmang(int x[],int n){
	for (int i=0;i<n;i++) {
		printf("\n%d",x[i]);
	}
}


 int main (){
    int a[100];
	int n;
	Nhap:
		printf("nhap n");
		scanf("%d",&n);
		if (n<=0 || n>100) goto Nhap;
		for (int i=0;i<n;i++) 
		{printf("\na[%d]",i);
		scanf("%d",&a[i]);}
/*    printf("sap xep mang tang dan");
	int j,i;
	int h;
	for ( j=0;j<n;j++){ 
	for ( i=1+j;i<n;i++) { 
	if (a[j]>a[i]) { h=a[j];a[j]=a[i]; a[i]=h; } 
	}
}
 for(int c=0;c<n;c++){
 
printf("\n%d",a[c]);}
	for ( j=0;j<n;j++){ 
	for ( i=1+j;i<n;i++) { 
	if (a[j]<a[i]) { h=a[j];a[j]=a[i]; a[i]=h;} 
	}
}
printf("\nsap xep mang giam dan");
 for(int c=0;c<n;c++){
 
printf("\n%d",a[c]);} */
tangdan(a,n);
printmang(a,n);
giamdan(a,n);
printmang(a,n);

}





