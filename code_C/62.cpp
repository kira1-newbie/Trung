#include<stdio.h>
int a[100][100];
int b[100][100];
int dinhthucc2(int a[100][100]){
	printf("nhap ma tran cap 2");
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",a[i][j]);
		}
	}
	printf("%d",a[0][0]*a[1][1]-a[0][1]*a[1][0]);
}
int dinhthucc3(int b[100][100]){
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d%d ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
		int tong1=0;
		int tong2=0;
    for (int k=0;k<3;k++){
    	int i;
    	i=2;
    	int j=k;
    	int temp=1;
    	while ( i  >=0){
    		temp=temp*b[i][j];
    		i=i-1;
    		j=(j+1)%3;
		}
	tong1=tong1+temp;
	temp=1;
     }
     for (int k=0;k<3;k++){
    
     int j=k;
     int temp1=1;
     
	 for (int t=0;t<3;t++){
	 
    		temp1=temp1*b[t][j];
    		j=(j+1)%3;
		 }
		
	 tong2=tong2+temp1;
	 temp1=1;
    }
    


printf("%d",tong2-tong1);
}
main(){
	
	dinhthucc3(b);
}
