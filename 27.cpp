#include <stdio.h>
 	int kiem_tra_snt(int x){
 		if (x<=1) return 0;	
 		for(int i=2;i<=(x-1);i++){ if (x%i==0) return 0; }
 		return 1;
		 }
 	int main (){
 		int n;
 		printf("nhap n=");
 		scanf("%d",&n);
 		int kt=kiem_tra_snt(n);
 		if (kt==0){printf("\n%d khong phai la so nguyn to",n);
		 } else{printf("\n%d la so nguyen to",n);
		 }
	 }	
 		
	
	
 
