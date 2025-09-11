#include<stdio.h>
#include <stdlib.h>
struct node
{
	node *left;
	node *right;
	int dl;
}nd;
node *them_pt(node *tree,node *temp)
{
	if(tree==NULL)
		tree=temp;
	else
		{
			node *temp1;
			node *temp2;	
			temp1=tree;
			while(temp1!=NULL)
			{
				temp2=temp1;
				if(temp1->dl<=temp->dl)
					temp1=temp1->right;
				else temp1=temp1->left;
			}
			if(temp2->dl<temp->dl) temp2->right=temp;
			else temp2->left=temp;
		}	
	return tree;
}
node *nhap(node *tree)
{
	tree=NULL;
	node *temp;
	int x;
	printf("Nhap 0 de dung");
	do
	{
		scanf("%d",&x);
		if(x!=0)
			{
				temp= new node;
				temp->left=NULL;
				temp->right=NULL;
				temp->dl=x;
				tree=them_pt(tree,temp);
			}
	}
	while(x!=0);
	return tree;
}
//DUYET truoc
void xuatNLR(node *tree)
{
	if(tree!=NULL)
	{
	printf("%d ",tree->dl);
	xuatNLR(tree->left);
	xuatNLR(tree->right);
	}
}
// duyet sau
void xuatLRN(node *tree)
{
	if(tree!=NULL)
	{
	xuatLRN(tree->left);
	xuatLRN(tree->right);
	printf("%d ",tree->dl);
	}
}
// duyet giua
void xuatLNR(node *tree)
{
	if(tree!=NULL)
	{
	xuatLNR(tree->left);
	printf("%d ",tree->dl);
	xuatLNR(tree->right);
	}
}
void in_cay(node *tree,int dichphai)
{
	int i;
	node *tg=tree;
	if(tg!=NULL)
		{
			in_cay(tg->right,dichphai+4);
			for(int i=1;i<=dichphai;i++)
				printf(" ");
			printf("%d \n",tg->dl);
			in_cay(tg->left,dichphai+4);
		}
}
int timkiem(node *tree,int x)
{
	node *temp;
	temp=tree;
	while(temp!=NULL)
		{
			if(temp->dl==x) return 1;
			if(temp->dl<x) temp=temp->right;
			if(temp->dl>x) temp=temp->left;
		}
	return 0;
}
node *timkiem1(node *tree,int x)
{
	node *temp;
	temp=tree;
	while(temp!=NULL)
		{
			// tim kiem chi nen dung trong 1 cau lenh
			if(temp->dl==x) return temp;
			else
			if(temp->dl<x) temp=temp->right;
			else if(temp->dl>x) temp=temp->left;
		}
	return NULL;
}
node *chen(node *tree,int x)
{
	
	node *temp;
	temp=new node;
	temp->left=temp->right=NULL;
	temp->dl=x;
	tree=them_pt(tree,temp);
	return tree;
}
// xoa
/*
node* findMin(node* root) {
    while (root->left != NULL)
        root = root->left;
    return root;
}
node* deleteNode(node* root, int key) {
    if (root == NULL) return NULL;
	if (key < root->dl)
        root->left = deleteNode(root->left, key);
    else if (key > root->dl)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            node* temp = root->left;
            free(root);
            return temp;
        }
        node* temp = findMin(root->right);
        root->dl = temp->dl;
        root->right = deleteNode(root->right, temp->dl);
    }
    return root;
}
*/
node *xoagoc(node *tree)
{
	node *temp,*giu;
	temp=tree;
	if(tree->left!=NULL&&tree->right!=NULL)
	{
		temp=tree;
		tree=tree->right;
		giu=temp->left;
		temp->left=NULL;
		temp->right=NULL;
		delete temp;
		tree=them_pt(tree,giu);
	}
	else
		if(tree->left==NULL)
		{
			tree=tree->right;
			temp->right=NULL;
			delete temp;	
		}
		else
		{
			tree=tree->left;
			temp->left=NULL;
			delete temp;
		}
	return tree;
}
node *xoala(node *tree,node *temp)
{
	 node *p;
	 p=tree;
	 while(p->left!=temp&&p->right!=temp)
	 {
	 	if(p->dl<=temp->dl)	p=p->right;
	 	else
	 		if(p->dl>temp->dl)	p=p->left;
	 }
	 if(p->left==temp)	p->left=NULL;
	 else p->right=NULL;
	 delete temp;
	 return tree; 
}
node *xoacb(node *tree,node *temp)
{
	node *p;
	node *giu;
	p=tree;
	while(p->left!=temp&&p->right!=temp)
	{
		if(p->dl<=temp->dl)
			p=p->right;
		else p=p->left;
	}
	if(p->right==temp)
	{
		p->right=temp->right;
	}
	else if(p->left==temp)
	{
		p->left=temp->right;
	}
	giu=temp->left;
	temp->right=NULL;
	temp->left=NULL;
	tree=them_pt(tree,giu);
	return tree;
}
node *xoaphai(node *tree,node *temp)
{
	node *p;
	p=tree;
	while(p->left!=temp&&p->right!=temp)
	{
		if(p->dl<=temp->dl)	
			p=p->right;
		else p=p->left;
	}
	if(p->left==temp)
	{
		p->left=temp->right;
	}
	else if(p->right==temp)
	{
		p->right=temp->right;
	}
	temp->right=NULL;
	delete temp;
	return tree;
}
node *xoatrai(node *tree,node *temp)
{
	node *p;
	p=tree;
	while(p->left!=temp&&p->right!=temp)
	{
		if(p->dl<=temp->dl)
			p=p->right;
		else p=p->left;
	}
	if(p->left==temp)
	{
		p->left=temp->left;
	}
	else p->right=temp->left;
	temp->left=NULL;
	delete temp;
	return tree;
}
node *xoa(node *tree,int x)
{
	while(timkiem1(tree,x)!=NULL)
	{
		node *temp=timkiem1(tree,x);
		//xoa goc
		if(temp==tree)
			{
				tree=xoagoc(tree);
			}
		//xoa nut la
		else
		if(temp->left==NULL&&temp->right==NULL)
		{
			tree=xoala(tree,temp);
		}
		else 
		if(temp->left!=NULL&&temp->right!=NULL)
		{
			tree=xoacb(tree,temp);
		}
		else
		if(temp->left!=NULL&&temp->right==NULL)
		{
			tree=xoatrai(tree,temp);	
		}
		else
		if(temp->right!=NULL&&temp->left==NULL)
		{
			tree=xoaphai(tree,temp);
		}
	}
	return tree;
}
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int docao(node *tree)
{
	if(tree==NULL)
		return 0;
	else 
		return 1+max(docao(tree->left),docao(tree->right));
} 
int nut(node *tree)
{
	if(tree==NULL)
		return 0;
	else
	{
		if(tree->left==NULL&&tree->right==NULL)
		return 1;
		return nut(tree->left)+nut(tree->right); 
	}
}
void bac(node *tree,int &k)
{	
	int i=0;
	if(tree==NULL) return ;
	if(tree->left!=NULL) i++;
	if(tree->right!=NULL) i++;
	if(i>k) k=i;
	bac(tree->left,k);
	bac(tree->right,k);
} 
main()
{
	node *tree;
	int k;
	int i=0;
	do
	{
	printf("\n1: Tao cay");
	printf("\n2: duyet LNR");
	printf("\n3: duyet NLR");
	printf("\n4: duyet LRN");
	printf("\n5: In cay");
	printf("\n6: Tim kiem");
	printf("\n7: Chen");
	printf("\n8: Xoa");
	printf("\n9: Do cao cua cay");
	printf("\n10:So nut la cua cay");
	printf("\n11: Bac cua cay");
	printf("\n0: Thoat");
	printf("\n-------------------------");
	printf("\nNhap K: ");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			{
				tree=nhap(tree);
				break;
			}
		case 2:
			{
				xuatLNR(tree);
				printf("tgp\n");
				xuatNLR(tree);
				printf("gtp\n");
				xuatLRN(tree);
				printf("tpg\n");
					xuatLRN(tree);
				printf("tpg\n");
					xuatLRN(tree);
				printf("t\n");
					xuatLRN(tree);
				printf("tpg\n");
				break;
			}
		case 3:
			{
				xuatNLR(tree);
				break;
			}
		case 4:
			{
				xuatLRN(tree);
				break;
			}
		case 5: 
			{
				in_cay(tree,2);
				break;
			}
		case 6:
			{
				int a;
				printf("Nhap phan tu can tim kiem");
				scanf("%d",&a);
				if(timkiem(tree,a)==1)
					printf("Tim thay!");
				else printf("Khong tim thay!");
				break;
			}
		case 7:
			{
				int a;
				printf("Nhap phan tu can chen");
				scanf("%d",&a);
				tree=chen(tree,a);
				break;
			}
		case 8:
			{
				int x;
				printf("Nhap phan tu can xoa: ");
				scanf("%d",&x);
				tree=xoa(tree,x);
				break;
			}
		case 9:
			{
				printf("Do cao cua cay: %d",docao(tree));
				break;
			}
		case 10:
			{
				printf("So nut la: %d",nut(tree));
					break;
			}
		case 11:
			{
				int k=0;
				bac(tree,k);
				printf("Bac cua cay: %d",k);
				break;
			}
	}
	printf("\n");
	}
	while(k!=0);
}
