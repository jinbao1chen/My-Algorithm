#include<stdio.h>

int main()
{
	int a[100], i, j, num;

	scanf("%d", &num);

	for(i=0; i<num; i++)
	{
		scanf("%d", &a[i]);
	}

	//冒泡排序核心
	for(i=0; i<num-1; i++)					//一共进行 num-1 趟，num是待排序的个数
	{
		for(j=0; j<num - i - 1; j++)		//每一趟比较的次数
		{
			if(a[j] < a[j+1])				//较小的数放到后面
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}

	for(i=0; i<num; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");

	return 0;
}
