#include<stdio.h>
struct node
{
	node *truoc;
	node *tiep;
	int dl;
}nd;
node *bsung_sau(node *head, node *temp)
{
	if(head==NULL)
	{
		head=temp;
		head->truoc=temp;
		head->tiep=temp;
	}
	else
	{
		head->truoc->tiep=temp;
		temp->truoc=head->truoc;
		temp->tiep=head;
		head->truoc=temp;
	}
	return head;
}
node *bsung_truoc(node *head,node *temp)
{
	if(head==NULL)
	{
		head=temp;
		head->truoc=head;
		head->tiep=head;	
	}
	else 
	{
		head->truoc->tiep=temp;
		temp->truoc=head->truoc;
		temp->tiep=head;
		head->truoc=temp;
		head=temp;
	}
	return head;
}
node *nhap_lifo(node *head)
{
	node *temp;
	head=NULL;
	int x;
	printf("Nhap 0 de dung: ");
	do
	{
		scanf("%d",&x);
		if(x!=0)
		{
			temp=new node;
			temp->tiep=NULL;
			temp->truoc=NULL;
			temp->dl=x;
			head=bsung_truoc(head,temp);
		}
	}
	while(x!=0);
	return head;
}
node *nhap_fifo(node *head)
{
	node *temp;
	head=NULL;
	int x;
	printf("Nhap 0 de dung: ");
	do
	{
		scanf("%d",&x);
		if(x!=0)
		{
			temp=new node;
			temp->tiep=NULL;
			temp->truoc=NULL;
			temp->dl=x;
			head=bsung_sau(head,temp);
		}
	}
	while(x!=0);
	return head;
}
void xuat(node *head)
{
	node *temp;
	temp=head;
	do
	{
		printf("%d ",temp->dl);
		temp=temp->tiep;
	}
	while(temp!=head);
}
node *tk(node *head, int x)
{
	node *temp;
	temp=head;
	do
	{
		if(temp->dl==x) return temp;
		temp=temp->tiep;
	}
	while(temp!=head);
	return NULL;
}
 node *sxep(node *head)
{
	node *head_tang;
	head_tang=NULL;
	node *temp;
	node *p,*x;
	do
	{
		temp=head;
		head=head->tiep;
		head->truoc=temp->truoc;
		temp->truoc->tiep=head;
		temp->tiep=NULL;
		temp->truoc=NULL;
		if(head_tang==NULL)
		{
			head_tang=temp;
			head_tang->tiep=head_tang;
			head_tang->truoc=head_tang;
		}	
	else
		{
			p=head_tang;
			while(p->tiep!=head_tang&&p->tiep->dl<temp->dl)
				p=p->tiep;
			if(temp->dl<head_tang->dl)
				{
				
					temp->truoc=head_tang->truoc;
					temp->tiep=head_tang;
					head_tang->truoc->tiep=temp;	
					head_tang->truoc=temp;
					head_tang=temp;
	
				}
			else
			{
				temp->tiep=p->tiep;
				p->tiep->truoc=temp;
				temp->truoc=p;
				p->tiep=temp;
			
			}
		}	
	}
	while(temp!=head);
	return head_tang;
}
/*
node *chen_so(node *head,int x)
{
	node *te
}
node *xoa(node *head)
{
	
}
node *tron(node *head,node *head1)
{
	
}
*/
main()
{
	node *head;
	head=nhap_fifo(head);
	xuat(head);
	head=sxep(head);
	printf("\n");
	xuat(head);
}
