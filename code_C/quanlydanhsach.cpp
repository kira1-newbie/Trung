#include<stdio.h>
#define MAX 50 
struct listInt{
int n; 
int nodes [MAX];
}list;
int ktra_rong(listInt ds)
{
	if(ds.n==0) return 1;
	else return 0;
}
void createList(listInt &ds)
{
	int i;
	printf("Nhap vao so phan tu: "); 
	scanf("%d",&ds.n);
	printf("Nhap cac gia tri cho cac phan tu:"); 
	for(i=0; i<ds.n; i++)
	{
		printf("\n listInt[%d]= ",i+1); 
		scanf("%d",&ds.nodes[i]);
	}
}
void duyet_ds(listInt ds)
{
	if(ktra_rong(ds)==1) printf("danh sach rong");
	else 
	{
		for(int i=0;i<ds.n;i++)
			printf("%d ",ds.nodes[i]);
	}
}
void xoa(listInt &ds,int vt)
{
	if(vt==ds.n) ds.n--;
	for(int i=vt;i<ds.n-1;i++)
	{
		ds.nodes[i]=ds.nodes[i+1];
	}
	ds.n--;
}
void them(listInt &ds,int vt,int x)
{
	for(int i=ds.n-1;i>=vt;i--)
	{
		ds.nodes[i+1]=ds.nodes[i];
	}
	ds.nodes[vt]=x;
	ds.n++;
}
int timkiem(listInt ds,int x)
{
	for(int i=0;i<ds.n;i++)
	 if(ds.nodes[i]==x) return 1;
	return 0;
}
int main()
{
	int i,x;
	listInt ds;
	ds.n=0;
	createList(ds);
	duyet_ds(ds);
	int k;
	if(ktra_rong(ds)!=1)
	{
	do
	{
		printf("\nMENU:");
		printf("\n1:Them phan tu x vao danh sach");
		printf("\n2:Xoa vi tri x trong danh sach");
		printf("\n3:Xoa tat ca phan tu trong danh sach");
		printf("\n4:Tim kiem phan tu trong danh sach");
		printf("\n0:Thoat!\n");
		scanf("%d",&k);
		switch(k)
		{
			case 2:
				{
					printf("Nhap vi tri can xoa: ");
					scanf("%d",&i);
					i--;
					xoa(ds,i);					
					break;
				}
			case 1:
				{
					printf("Nhap vi tri can chen: ");
					scanf("%d",&i);
					i--;
					if(i>ds.n-1) printf("Vi tri chen sai!\n");
					else 
					{
					printf("Nhap phan tu can chen: ");
					scanf("%d",&x);
					if(i>ds.n) printf("Vi tri chen khong phu hop");
					else them(ds,i,x);
					}
					break;
				}
			case 3:
				{
					getchar();
					char x;
					printf("Ban co muon xoa het tat ca phan tu khong? (Y/N)\n");
					scanf("%c",&x);
					if(x=='y') ds.n=0;
					break;
				}
			case 4:
				{
					printf("Nhap gia tri can tim kiem: ");
					scanf("%d",&x);
					if(timkiem(ds,x)==1) printf("Tim thay!");
					else printf("Khong tim thay!");
					break;
				}
		}
			duyet_ds(ds);
			printf("\n");
	}
		while(k!=0);
	}
}
