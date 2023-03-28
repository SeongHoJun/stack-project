#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX_SIZE 10
typedef int element;
element stack[MAX_SIZE];
int top = -1;

int is_empty()
{
	return (top == -1);
}
int is_full()
{
	return (top == (MAX_SIZE - 1));
}

void push(element item)	//top�� �ø��鼭 ������ ����
{
	if (is_full())
	{
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else
	{
		stack[++top] = item;
	}
}


element pop()	//top�� �����鼭 ������ ����
{
	if (is_empty())
	{
		fprintf(stderr, "���� ���� ����\n");
		//exit(1);
	}
	else return stack[top--];
}

element peek()
{
	if (is_empty())
	{
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return stack[top];
}

int main() 
{
	srand(time(NULL));
	for (int i = 0; i < 30; i++)
	{
		int rand_num = rand() % 100 + 1;
		if (rand_num % 2 == 0)
		{
			push(rand_num);
			printf("%d\n", rand_num);
		}
		else
		{
			printf("%d\n", rand_num);
			pop();
		}
	}
}
