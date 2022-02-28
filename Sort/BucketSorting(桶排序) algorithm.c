#include<stdio.h>
#include<unistd.h>

int main()
{
	//设置桶的个数
	int bucket[1000], i, j, n;
	for(i=0; i<=1000; i++)
		bucket[i] = 0;

	int num;
	scanf("%d", &num);

	//将第t个桶++，表示该桶被标记
	for(n=0; n<num; n++)
	{
		int t;
		scanf("%d", &t);
		bucket[t]++;
	}

	//将被标记过的桶输出
	for(i=1000; i>=0; i--)
	{
		for(j=0; j<bucket[i]; j++)
		{
			printf("%d ", i);
		}
	}
	
	printf("\n");

	sleep(2);

	return 0;
}
