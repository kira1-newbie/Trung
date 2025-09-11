#include<stdio.h>
struct phanso{
	int tu;
	int mau;
};
void inpphanso(phanso *ps){
	printf("nhap tu");
	scanf("%d",&ps->tu);
	printf("nhap mau");
	scanf("%d",&ps->mau);
}
void outpphanso(phanso ps){
	if (ps.mau<0){
		ps.mau=-1*ps.mau;
		ps.tu=-1*ps.tu;
    }
    if (ps.mau==1){
    	printf("%d",ps.mau);
	} else printf("%d %d",ps.tu,ps.mau);
	}
int uscln(int a,int b){
   while(a!=b)	
   {
   	if(a>b)
	{a=a-b;}
	else {b=b-a;} 
   }
}
void rutgonphanso(phanso &ps){
	int c=uscln(ps.tu,ps.mau);
	ps.mau=ps.mau/c;
    ps.tu=ps.tu/c;
}
void thuchientinhtoan(char a,phanso ps,phanso ps1)
{
	phanso kq;
	int t;
	int m;
	if (a=='+'){
	  t=(ps.tu*ps1.mau)+(ps1.tu*ps.mau);
	  m=ps.mau*ps1.mau;
	}
	if (a=='-'){
	  t=(ps.tu*ps1.mau)-(ps1.tu*ps.mau);
	  m=ps.mau*ps1.mau;
	}
	if (a=='*'){
	  t=ps.tu*ps1.tu;
	  m=ps.mau*ps1.mau;
	}
	if (a=='/'){
	  t=ps.tu*ps1.mau;
	  m=ps.mau*ps1.tu; 
	}
	kq.tu=t;
	kq.mau=m;
	rutgonphanso(kq);
    outpphanso(kq);
}
int main(){
	char a;
	phanso ps1, ps2;
	inpphanso(&ps1);
	inpphanso(&ps2);
	fflush(stdin);	
    printf("phep tinh can thuc hien:");
    scanf("%c",&a);
    thuchientinhtoan(a,ps1,ps2);	
}
