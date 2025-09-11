// sao chep chuoi
#include<stdio.h>
#include<string.h>
char copy (char b[], char a[]){
	int i=0;
	while(a[i]!=NULL){
		b[i]=a[i];
		i++;
	}
}
main(){
	char a[100];
	char b[100]="u";
	fgets(a,sizeof(a),stdin);
	printf("a %s",a);
	printf("\n b %s sau khi copy",b);
	copy(b,a);
	puts(b);
}
