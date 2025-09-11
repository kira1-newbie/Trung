#include<stdio.h>
#include<string.h>
struct sv
{
	int masv;
	char tensv[25];
	char lop[5];
	float dtb;
	sv *tiep;
}sinhvien;
sv *bsung_sau (sv *head, sv *temp)
{
	if(head==NULL)
		head=temp;
	else
	{
		sv *p;
		p=head;
		while(p->tiep!=NULL)
		{
			p=p->tiep;
		}
		p->tiep=temp;
	}
	return head;
}
sv *nhap(sv *head)
{
	int x;
	sv *temp;
	head=NULL;	
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&x);
	for(int i=1;i<=x;i++)
	{
		temp=new sv;
		printf("Sinh vien %d\n",i);
		printf("Nhap ma sv: ",i);
		scanf("%d",&temp->masv);
		getchar();
		printf("Nhap ten:",i);
		gets(temp->tensv);
		printf("Nhap lop:",i);
		gets(temp->lop);
		printf("Nhap diem trung binh: ",i);
		scanf("%f",&temp->dtb);
		temp->tiep=NULL;
		head=bsung_sau(head,temp);
	}
	return head;
}
void xuat(sv *head)
{
	sv *temp;
	temp=head;
	printf("Danh sach sinh vien:");
	while(temp!=NULL)
	{
		printf("\nMa sinh vien: %d ",temp->masv);
		printf("\nTen sinh vien: %s",temp->tensv);
		printf("\nLop: %s",temp->lop);
		printf("\nDiem trung binh: %f",temp->dtb);
		temp=temp->tiep;
	}
}
sv *xoa(sv *head,char lop1[])
{
	getchar();
	printf("Nhap lop can xoa: ");
	gets(lop1);
	sv *temp;
	sv *t;
	while(head!=NULL&&strcmpi(head->lop,lop1)==0)
		{
			head=head->tiep;
		}
	temp=head;
	while(temp!=NULL)
	{
	while(temp->tiep!=NULL&&strcmpi(temp->tiep->lop,lop1)==0)
	{
		t=temp->tiep;	
		temp->tiep=t->tiep;
		t->tiep=NULL;
	}    
		if(temp!=NULL) temp=temp->tiep;
	}
	return head;
}
void tach_dtb(sv *(&head), sv *(&head1),sv *(&head2))
{
	head1=NULL;
	head2=NULL;
	sv *temp;
	sv *temp1;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->dtb<5)
		{
			temp1=temp;
			temp=temp->tiep;
			temp1->tiep=NULL;
			head1=bsung_sau(head1,temp1);
		}
		else
		{
			temp1=temp;
			temp=temp->tiep;
			temp1->tiep=NULL;
			head2=bsung_sau(head2,temp1);
		}
	}
}
main()
{
	sv *head,*head1,*head2;
	char lop1[20];
	head=nhap(head);
	xuat(head);	
	printf("\n");
	head=xoa(head,lop1);
	xuat(head);
	tach_dtb(head,head1,head2);
	printf("\nSinh vien co dtb <5:\n");
	xuat(head1);
	printf("\nSinh vien co dtb >=5\n");
	xuat(head2);
}
