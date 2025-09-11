#include<stdin.h>
struct node
{
	int dl;
	node *tiep;
}n;
node *bsung_truoc(node *head,node *temp)
{
	node *p;
	if(head==NULL)
		head=temp;
	else 
	{
		while(p!=NULL)
			p=p->tiep;
			p->tiep=temp;
	}
	return head;
}
node *bsung_sau(node *head, node *temp)
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
	int n;
	printf("Nhap so phan tu");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		temp=new node;
		printf("Nhap phan tu %d",i);
		scanf("%d",&temp->dl);
		temp->tiep=NULL;
		head=bsung_sau(head,temp);
	}
}
node *nhap_lifo(node *head)
{
	node *temp;
	head=NULL;
	int n;
	printf("Nhap so phan tu");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		temp=new node;
		printf("Nhap phan tu %d",i);
		scanf("%d",&temp->dl);
		temp->tiep=NULL;
		head=bsung_truoc(head,temp);
	}
}
void xuat(node *head)
{
	node *temp;
	temp=head;
	while(temp->tiep!=NULL)
	{
		printf("%d ",temp->dl);
		temp=temp->tiep;
	}
}
int *timkiem_1(node *head, int x)
{
	node *temp;
	temp=head;
	while(temp->tiep!=NULL)
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
	while(temp->tiep!=NULL)
	{
		if(temp->dl==x) return temp;
		temp=temp->tiep;
	}
	return NULL;
}
node *chen(node *head, int x)
{
	node *p;
	p=new node;
	p->dl=x;
	node *temp;
	temp=head;
	node *t;
	while(temp!=NULL&&temp->dl<x)
	{
		t=temp;
		temp=temp->tiep;		
	}
	p->tiep=t->tiep;
	t->tiep=p;
	return head;
}
node *xoa(node *head, int x)
{
	node *temp;
	temp=head;
	while(x<head->dl)
		head=head->tiep;
	while(temp!=NULL)
	{
		node *p=timkiem_2(head,x);
		if(p!=NULL&&temp->tiep->dl=x) 
			{
				temp->tiep=p->tiep;
				p->tiep=NULL;
			}
		else temp=temp->tiep;
	}
	return head;
}
node *sxep_tangdan(node *head)
{
	node *i,*j;
	for(i=head;i!=NULL;i=i->tiep)
		for(j=i->tiep;j!=NULL;j=j->tiep)
			if(i->dl>j->dl)
			{
				int temp;
				temp=i;
				i=j;
				j=temp;
			}
	return head;
}
node *ghep(node *head1, node *head2)
{
	head1=sxep_tangdan(head1);
	head2=sxep_tangdan(head2);
	node *head;
	head=NULL;
	node *i,*j;
	node *temp;
	while(i!=NULL&&j!=NULL)
	{
		if(i->dl<j->dl)
		{
			temp=new node;
			temp->dl=i->dl;
			temp->tiep=NULL;
			head=bsung_sau(head,temp);
			i=i->tiep;	
		}
		else 
		{
			if(i->dl>j->dl)
			{
				temp=new node;
				temp->dl=j->dl;
				temp->tiep=NULL;
				head=bsung_sau(head,temp);
				j=j->tiep;
			}
			else i=i->tiep;
		}
	}
	while(i!=NULL)
	{
		if(i->dl>temp->dl)
		{
			temp=new node;
			temp->dl=i->dl;
			temp->tiep=NULL;
			head=bsung_sau(head,temp);
		}
		i=i->tiep;
	}
	while(j!=NULL)
	{
		if(j->dl>temp->dl)
		{
			temp=new node;
			temp->dl=j->dl;
			temp->tiep=NULL;
			head=bsung_sau(head,temp);
		}
		j=j->tiep;
	}
	return head;
}
main()
{
	
}
