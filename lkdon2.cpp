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
node *bsung_truoc(node *head, node *temp)
{
	if(head==NULL)
		head=temp;
	else 
		{
			temp->tiep=head;
			head=temp;
		}
	return head;
}
node *nhap_fifo(node *head)
{
	node *temp;
	head=NULL;
	printf("Nhap so phan tu: ");
	int n;
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
node *nhap_lifo(node *head)
{
	node *temp;
	head=NULL;
	printf("Nhap so phan tu: ");
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		temp=new node;
		temp->tiep=NULL;
		printf("Phan tu %d: ",i);
		scanf("%d",&temp->dl);
		head=bsung_truoc(head,temp);
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
node *timkiem_2(node *head, int x)
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
node *chen(node *head, int x)
{
	node *temp;
	temp=head;
	node *p,*t;
	p=new node;
	p->dl=x;
	p->tiep=NULL;
	if(x<head->dl)
	{
		p->tiep=head;
		head=p;
	}
	else 
	{
		while(temp!=NULL&&temp->dl<x)
		{
			t=temp;
			temp=temp->tiep;
		}
		p->tiep=t->tiep;
		t->tiep=p;
	}
	return head;
}
node *xoa(node *head,int x)
{
	node *temp;
	node *p;
	temp=head;
	while(head->dl==x)
	{
		head=head->tiep;
	}
	p=timkiem_2(head,x);
	while(temp!=NULL)
	{
		if(p!=NULL)
		{
			while(temp->tiep!=p)
			temp=temp->tiep;
			temp->tiep=p->tiep;
			p->tiep=NULL;
			p=timkiem_2(head,x);
		}
		else
		temp=temp->tiep;
	}
	return head;
}
node *tangdan(node *head)
{
	node *i,*j;
	for(i=head;i!=NULL;i=i->tiep)
		for(j=i;j!=NULL;j=j->tiep)
			if(i->dl>j->dl)
				{
					int temp;
					temp=i->dl;
					i->dl=j->dl;
					j->dl=temp;
				}
	return head;
}
node *tron(node *head1,node *head2)
{
	node *head;
	head=NULL;
	node *temp;
	node *a,*b;
	a=tangdan(head1);
	b=tangdan(head2);
	int x;
	while(a!=NULL&&b!=NULL)
	{
		if(a->dl<b->dl)
		{
			temp=new node;
			temp->tiep=NULL;
			temp->dl=a->dl;
			x=temp->dl;
			head=bsung_sau(head,temp);
			a=a->tiep;
		}
		else
		{
			if(b->dl<a->dl)
			{
				temp=new node;
				temp->tiep=NULL;
				temp->dl=b->dl;
				x=temp->dl;
				head=bsung_sau(head,temp);
			    b=b->tiep;
			}
			else a=a->tiep;
		}
	}
	while(a!=NULL)
	{
		if(a->dl>x)
		{
			temp=new node;
			temp->tiep=NULL;
			temp->dl=a->dl;
			x=temp->dl;
			head=bsung_sau(head,temp);
			a=a->tiep;
		}
		else a=a->tiep;
	}
	while(b!=NULL)
	{
		if(b->dl>x)
		{
			temp=new node;
				temp->tiep=NULL;
				temp->dl=b->dl;
				x=temp->dl;
				head=bsung_sau(head,temp);
			    b=b->tiep;
		}
		else b=b->tiep;
	}
	return head;
}
main()
{
	node *head;
	head=nhap_fifo(head);
	xuat(head);
	printf("\n");
//	head=nhap_lifo(head);
//	xuat(head);
//	printf("\n");
	int x;
	printf("Nhap phan tu can tim kiem: ");
	scanf("%d",&x);
	if(timkiem_1(head,x)==1) printf("Co");
	else printf("Khong");
	printf("\n");
	printf("Nhap phan tu can chen: ");
	scanf("%d",&x);
	head=xoa(head,x);
	xuat(head);
	head=tangdan(head);
	xuat(head);
	node *head1,*head2;
	head1=nhap_fifo(head1);
	head2=nhap_fifo(head2);
	head=tron(head1,head2);
	xuat(head);
	
}
