//16페이지

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);// 0~9
//	printf("다음숫자 : %d", nextInt);// 50~59
//	
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	printf("내 주머니에 있는 돈은");
	int myMoney = (rand() % 10 + 1)* 1000;//1000-10000
	printf("%d원이다.\n", myMoney);
	int coin500 =rand() % 4 * 500; //0-1500
	int coin100 =rand() % 5000; //0-4999
	coin100 = coin100 / 100 * 100;//
	printf("그리고 과자의 가격은");
	printf(" %d원이다.", coin500 + coin100);
	printf("\n나는 과자를 살 수 있을까?");

	return 0;
}

