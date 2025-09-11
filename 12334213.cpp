#include<stdio.h>
struct node
{
	node *trai;
	node *phai;
	int dl;
}nd;
node *themnode(node *head,node *temp)
{
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		node *temp1,*temp2;
		temp1=head;
		while(temp1!=NULL)
		{
			temp2=temp1;
			if(temp1->dl>temp->dl)
			{
				temp1=temp1->trai;
			}
			else 
			{
				temp1=temp1->phai;
			}
		}
		if(temp2->dl<=temp->dl)
		{
			temp2->phai=temp;
		}
		else
			temp2->trai=temp;
	}
	return head;
}
node *nhap(node *head)
{
	node *temp;
	head=NULL;
	int x;
	printf("Nhap 0 de dung");
	do
	{
		scanf("%d",&x);
		if(x!=0)
		{
			temp=new node;
			temp->phai=NULL;
			temp->trai=NULL;
			temp->dl=x;
			head=themnode(head,temp);
		}
	}
	while(x!=0);
	return head;	
}
void xuat(node *head)
{
	node *temp;
	temp=head;
	if(temp!=NULL)
	{
		xuat(temp->trai);
		printf("%d ",temp->dl);
		xuat(temp->phai);
	}
}
void incay(node *head,int kc)
{
	node *temp=head;
		if(temp!=NULL)
		{	
			incay(temp->trai,kc+2);
			for(int i=1;i<=kc;i++)
			{
				printf(" ");
			}
			printf("%d\n",temp->dl);
			incay(temp->phai,kc+5);
			
		}
}
main()
{
	node *head;
	head=nhap(head);
	xuat(head);
	printf("\n");
	int x;
	x=5;
	incay(head,x);
}
