#include<stdio.h>
#include<string.h>
typedef struct Hoso
{
	char HoTen[40];
	int gioitinh;
	float Diem;
	char Loai[10];
}Hoso;

void Nhap(Hoso hocsinh[],int &n)
{
	printf("Nhap so luong hoc sinh");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		getchar();
		printf("Nhap ho ten hoc sinh thu %d",i);
		gets(hocsinh[i].HoTen);
		printf("Nhap gioi tinh");
		scanf("%d",&hocsinh[i].gioitinh);
		printf("Nhap diem hoc sinh %d",i);
		scanf("%f",&hocsinh[i].Diem);
	}
}

void In(Hoso hocsinh[],int n)
{
	printf("danh sach hoc sinh ");
	for(int i=1;i<=n;i++)
	{
		printf("\nhoc sinh thu %d",i);
		printf("\nho ten hoc sinh: %s",hocsinh[i].HoTen);
		if(hocsinh[i].gioitinh==1) printf("\nGioi Tinh: Nam");
		else printf("\nGioi Tinh: Nu");
		printf("\nDiem hoc sinh thu %d: %f",i,hocsinh[i].Diem);
		printf("\nXep loai: %s\n",hocsinh[i].Loai);
	}	
}
void xeploai(Hoso hocsinh[], int n)
{
	for(int i=1;i<=n;i++)
	{
		if(hocsinh[i].Diem>=9) 
			strcpy(hocsinh[i].Loai,"Gioi");
		else if(hocsinh[i].Diem>=7)
			strcpy(hocsinh[i].Loai,"Kha");
		else if (hocsinh[i].Diem>=5)
		    strcpy(hocsinh[i].Loai,"TB");
		else strcpy(hocsinh[i].Loai,"Yeu");
	}
}
void hoanvi(Hoso &hocsinh1,Hoso &hocsinh2)
{
	Hoso temp;
	temp=hocsinh1;
	hocsinh1=hocsinh2;
	hocsinh2=temp;
}
void danhsachtangdan(Hoso hocsinh[], int n)
{
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
		if(hocsinh[i].Diem>hocsinh[j].Diem) 
			hoanvi(hocsinh[i],hocsinh[j]);
}
main()
{
	struct Hoso hocsinh[100];
	int n;
	Nhap(hocsinh,n);
	xeploai(hocsinh,n);
	In(hocsinh,n);
	danhsachtangdan(hocsinh,n);
	printf("\nDanh sach hoc sinh tang dan\n");
	In(hocsinh,n);
}
