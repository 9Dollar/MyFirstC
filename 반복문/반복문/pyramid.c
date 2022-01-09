#include <stdio.h>

int main(void)
{
	//++(뿔뿔)
	//원래 알고있던 ++과는 약간 다르니 주의
	//int a = 10;
	//printf(a++); => 10
	//int b = 5;
	//printf(++a); => 6
	//앞에오는 ++은 +1을 1순위로 실행
	//뒤에오는 ++은 +1을 마지막 순위로 실행

	//반복문
	//for, while, do while

	//for(변수선언; 조건; 증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
	}*/

	//while(조건)
	/*int i = 1;
	while(i <= 10)
	{
		printf("%d\n", i++);
	}*/

	//do{ } while (조건);
	/*int i = 1;
	do {
		printf("%d\n", i++);
	} while (i <= 10);*/
	int floor;
	printf("몇층?");
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