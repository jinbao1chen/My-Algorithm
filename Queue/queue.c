/* 题目：输入num个数的一串数字，按照规则，首先将第1个数删除，接着将第2个数放到这串数的末尾，
 * 		 再将第3个数删除，将第4个数放到末尾，再将第5个数删除，将第6个数放到末尾...
 * 		 直到剩下最后1个数也删除。按照删除的顺序输出新的一串数字。
 */


#include<stdio.h>

struct Queue
{
	int data[100];		//队列数据
	int head;			//队首
	int tail;			//队尾
};

int main()
{
	struct Queue queue;

	int i;
	//初始化队列
	queue.head = 1;
	queue.tail = 1;

	int num;
	scanf("%d", &num);
	//依次向队列里输入num个数
	for(i=1; i<=num; i++)
	{
		scanf("%d", &queue.data[i]);
		queue.tail++;
	}

	while(queue.head < queue.tail)
	{
		//打印队首并将队首出列
		printf("%d ", queue.data[queue.head]);
		queue.head++;

		//将当前的队首移动到队尾
		queue.data[queue.tail] = queue.data[queue.head];
		queue.tail++;

		//当前队首移动到队尾也相当于队首移除了
		queue.head++;
	}

	printf("\n");

	return 0;
}
