#include <stdio.h>
int main()
{
	int a[10];
	int i,left,right,center,b;
	left = 0;
	right = 9;
	for(i = 0;i < 10;i ++)
	{
		scanf("%d",&a[i]);
	}
	printf("��������Ҫ���ҵ�����:");
	scanf("%d",&b);
	while(left <= right)
	{
		center = (left + right) / 2;
		if(b > a[center])
		{
			left = center + 1;
		}
		else if(b < a[center])
		{
			right = center + 1;
		}
		else
		{
			printf("�ҵ�λ��%d\n",center += 1);
			break;
		}
		
	}
	if(right < left)
	{
		printf("û���ҵ�\n");
	}
 } 
