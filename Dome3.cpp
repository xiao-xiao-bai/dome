#include <stdio.h>
#include <stdlib.h>
typedef struct BiNode{
	int data;
	struct BiNode *lchild;
	struct BiNode *rchild;
}BiNode;
typedef BiNode *BiTree;
BiTree Insert(BiTree &t,int e)
{
	if(!t)
	{
		t = (BiTree)malloc(sizeof(BiNode));
		t -> data = e;
		t -> lchild = NULL;
		t -> rchild = NULL;
	}
    if(e < t -> data)
    {
    	t -> lchild = Insert(t -> lchild,e);
	}
	if(e > t -> data)
	{
		t -> rchild = Insert(t -> rchild,e);
	}
	return t;
}
void Zhong(BiTree t)
{
	if(t == NULL)
	{
		return;
	}
	else
	{
		Zhong(t -> lchild);
		printf("%d ",t -> data);
		Zhong(t -> rchild);
		
	}
}
int main()
{
	BiTree t = NULL;//创建一个空树 
	int i;
	int a[7] = {1,2,3,4,5,6,7};
	for(i = 0;i < 7;i ++)
	{
		t = Insert(t,a[i]);
	}
	Zhong(t);
 } 
