// 30페이지 문제 6번

#include <stdio.h>
int main()
{
	int input, total = 0;
	int player = 0;

	while (1)
	{
		if (player == 0)
		{
			printf("a : ");
			player = 1;
		}
	
		else
		{
			printf("b : ");
			player = 0;
		}
			
			scanf("%d", &input);
			total += input;
			printf("=> %d\n", total);
		

		if (total >= 31)
		{
			break;
		}
	}
	printf("oo가 이겼습니다!");
	return 0;
}












