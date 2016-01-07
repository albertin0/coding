#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
	char val;
	int type;
	struct node *next,*prev,*left,*right;
} node;
int treetraversal(node *p)
{
	if(p->left!=NULL)
		treetraversal(p->left);
	printf("    %c %d",p->val,p->type);
	if(p->right!=NULL)
		treetraversal(p->right);
	return 0;
}
int main()
{
	int len,i;
	char in[]="abcd*ef-*/+";
	//printf("\n%d",strlen(in));
	node *ptr,*head,*temp,*root;
	ptr = (node*)malloc(strlen(in)*sizeof(node));
	head=ptr;
	len=strlen(in);
	for(i=0;i<len;i++)
	{
		ptr->val=in[i];
		if(in[i]>=97&&in[i]<=122)
			ptr->type=1;
		else
			ptr->type=0;
		ptr->next=ptr+sizeof(node);
		ptr=ptr->next;
		ptr->prev=ptr-sizeof(node);
	}
	ptr=head;
	for(i=0;i<=len-2;i++)
	{
		if(ptr->type==1)
			ptr=ptr->next;
		else
		{
			ptr->left=ptr-2*sizeof(node);
			ptr->right=ptr-sizeof(node);
			temp=ptr-3*sizeof(node);
			temp->next=ptr;
			//ptr->type=1;  not necessary
			ptr=ptr->next;
		}
	}
	ptr->left=ptr-2*sizeof(node);
	ptr->right=ptr-sizeof(node);
	root=ptr;
	printf("\n");
	treetraversal(root);
	/*for(i=0;i<len;i++)
	{
		printf("   %c %d",ptr->val,ptr->type);
		ptr=ptr+sizeof(node);
	}
	for(i=0;i<len;i++)
	{
		printf("   %c %d",ptr->val,ptr->type);
		ptr=ptr+sizeof(node);
	}*/
	free(head);
	return 0;
}