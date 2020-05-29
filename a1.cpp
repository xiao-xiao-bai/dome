//3.±‡–¥≥Ã–Ú£¨«Û1£°+3£°+5£°+7£°+9£°
#include <stdio.h>
main()
{
	int i;
	int j;
	int num = 0;
	int sum = 1;
	for(i = 1;i <= 9;i += 2)
	{
		for(j = 1;j <= i;j ++)
		{
			sum = sum * j;
		
		}
		num = num + sum;
		sum = 1;//÷ÿ÷√
	
	
	
	}
	printf("%d\n",num);



}