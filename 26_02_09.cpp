// 30페이지 문제 6번

#include <stdio.h>
int main()
{
	int input, total = 0;
	int player = 0;

	while (total < 31)
	{
		if (player == 0)
		{
			printf("A : ");
			player = 1;
		}
		else if (player == 1)
		{
			printf("B : ");
			player = 0;
		}
		scanf("%d", &input);
		total += input;
		printf("=> %d\n", total);
	}
	if(total >= 31)
	{
		if (player == 1)
		{
			printf("B가 승리하였습니다.\n");
		}
		else
		{
			printf("A가 승리하였습니다.\n");
		}
	}
	return 0;
}













