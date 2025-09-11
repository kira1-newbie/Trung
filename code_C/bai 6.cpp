#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct node
{
	int dl;
	node *tiep;
}nd;
node *bsung_sau(node *head,node *temp)
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
int timkiem(node *head,int x)
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
node *nhap(node *head)
{
	int n;
	head=NULL;
	node *temp;
	printf("Nhap n: ");
	scanf("%d",&n);
	int i,x;
	i=n;
	temp=new node;
		x=rand()%i+1;
		temp->dl=x;
		temp->tiep=NULL;
		head=bsung_sau(head,temp);
	n=n-1;
	while(n!=0)
	{
			int c;
			temp=new node;
			temp->tiep=NULL;
			while(timkiem(head,c)==1)
				c=rand()%i+1;
			temp->dl=c;	
			head=bsung_sau(head,temp);
		n=n-1;
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
main()
{
	node *head;
	srand((int)time(0));
	head=nhap(head);
	xuat(head);
}
