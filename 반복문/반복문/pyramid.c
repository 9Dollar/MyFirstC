#include <stdio.h>

int main(void)
{
	//++(�Ի�)
	//���� �˰��ִ� ++���� �ణ �ٸ��� ����
	//int a = 10;
	//printf(a++); => 10
	//int b = 5;
	//printf(++a); => 6
	//�տ����� ++�� +1�� 1������ ����
	//�ڿ����� ++�� +1�� ������ ������ ����

	//�ݺ���
	//for, while, do while

	//for(��������; ����; ����)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}*/

	//while(����)
	/*int i = 1;
	while(i <= 10)
	{
		printf("%d\n", i++);
	}*/

	//do{ } while (����);
	/*int i = 1;
	do {
		printf("%d\n", i++);
	} while (i <= 10);*/
	int floor;
	printf("����?");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {

		for (int j = i; j < floor - 1; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}