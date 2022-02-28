#include<stdio.h>
#include<string.h>

struct Student
{
	char name[32];
	int score;
};

int main()
{
	int i, j, num;

	struct Student a[100], t;

	printf("请输入排序的学生人数\n");
	scanf("%d", &num);

	printf("请输入学生姓名、分数：\n");
	for(i=0; i<num; i++)
	{
		scanf("%s%d", a[i].name, &a[i].score);			//输入姓名和分数
	}
	printf("------------------------\n");

	//冒泡排序核心
	for(i=0; i<num-1; i++)								//一共进行 num-1 趟，num是待排序的个数
	{
		for(j=0; j<num - i - 1; j++)					//每一趟比较的次数
		{
			if(a[j].score < a[j+1].score)				//较小的分数放到后面
			{
				t.score = a[j].score;
				strcpy(t.name, a[j].name);

				a[j].score = a[j+1].score;
				strcpy(a[j].name, a[j+1].name);

				a[j+1].score = t.score;
				strcpy(a[j+1].name, t.name);
			}
		}
	}

	for(i=0; i<num; i++)
	{
		printf("%s %d\n", a[i].name, a[i].score);
	}

	return 0;
}
