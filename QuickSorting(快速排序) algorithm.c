#include<stdio.h>

int a[101], n;

void Quicksort(int left, int right)
{
	if(left > right)
		return;

	int i, j, t, temp;

	//temp 中存的数就是基准数
	temp = a[left];
	i = left;
	j = right;

	while(i != j)
	{
		//顺序很重要，要先从右往左找。遇到小于基准数的数跳出循环
		while(a[j] >= temp && i<j)
		{
			j--;
		}

		//再从左往右找。遇到大于基准数的数跳出循环
		while(a[i] <= temp && i<j)
		{
			i++;
		}

		//交换两个数在数组中的位置
		if(i<j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}

	//最终将基准数归位
	a[left] = a[i];
	a[i] = temp;


	Quicksort(left, i-1);					//继续处理左边的，递归过程
	Quicksort(i+1, right);					//继续处理右边的，递归过程

}

int main()
{
	int i;

	//读入数据
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}

	Quicksort(1,n);							//快速排序调用

	//输出排序后的结果
	for(i=1; i<=n; i++)
		printf("%d ", a[i]);

	printf("\n");

	return 0;
}
