#include<stdio.h>
struct node
{
	int dl;
	node *tiep;
}nd;
node *bsung_sau(node *head, node *temp)
{
	if(head==NULL)
		head=temp;
	else
	{
		node *p;
		p=head;
		while(p->tiep!=NULL)
			p=p->tiep;
		p->tiep=temp;
	}
	return head;
}
node *nhap(node *head)
{
	node *temp;
	int n;
	head=NULL;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		temp=new node;
		temp->tiep=NULL;
		printf("Phan tu %d: ",i);
		scanf("%d",&temp->dl);
		head=bsung_sau(head,temp);
	}
	return head;
}
void xuat(node *head)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->dl);
		temp=temp->tiep;
	}
}
int timkiem_1(node *head,int x)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->dl==x) return 1;
		temp=temp->tiep;
	}
	return 0;
}
node *timkiem_2(node *head,int x)
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->dl==x) return temp;
		temp=temp->tiep;
	}
	return NULL;
}
node *xoa(node *head, int x)
{
	node *temp,*p;
	while(x==head->dl)
		head=head->tiep;
	temp=head;
	while(temp!=NULL)
	{
		p=timkiem_2(head,x);
		if(p!=NULL)
		{
			while(temp->tiep!=p)
				temp=temp->tiep;
			temp->tiep=p->tiep;
			p->tiep=NULL;
		}
		else temp=temp->tiep;
	}
	return head;
}
node *xoa_all(node *head)
{
	head=NULL;
	return head;
}
main()
{
	node *head;
	int x,k;
	do
	{
	printf("1:Nhap danh sach phan tu");
	printf("\n2:Tim kiem 1 phan tu: ");
	printf("\n3:Xoa phan tu co noi dung info");
	printf("\n4:Xoa toan bo danh sach");
	printf("\n0:Thoat!");
	printf("\nNhap lua chon: ");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			{
				head=nhap(head);
				xuat(head);
				printf("\n");
				break;
			}
		case 2:
			{
				printf("Nhap phan tu can tim kiem: ");
				scanf("%d",&x);
				if(timkiem_1(head,x)==1)
					printf("Co");
				else printf("Khong");
					printf("\n");
				break;
			}
		case 3:
			{
				printf("Nhap phan tu can xoa");
				scanf("%d",&x);
				head=xoa(head,x);
				xuat(head);
					printf("\n");
				break;
			}
		case 4:
			{
				head=xoa_all(head);
				xuat(head);
					printf("\n");
				break;
			}
	}	
	printf("-----------------------\n");
	}while(k!=0);
}
