// 30페이지 문제 6번

//#include <stdio.h>
//int main()
//{
//	int input, total = 0;
//	int player = 0;
//
//	while (1)
//	{
//		printf("%c : ", 'A' + player);
//		scanf("%d", &input);
//
//		if (input < 1 || input > 3)
//		{
//			printf("다시 입력 바랍니다.\n");
//			continue;
//		}
//
//		total += input;
//		printf("=> %d\n", total);
//
//		//player = !player; -> 다른 방식의 플레이어 전환 방법
//		player++;
//		player %= 26;
//
//		if (total >= 31)
//			break;
//	}
//	printf("%c 가 졌습니다.\n", 'A' + player);
//	return 0;
//}

// 31 페이지 

//#include <stdio.h>
//int main()
//{
//	int temperature = 40;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} 
//	while (temperature > 28);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int input;
//	enum { GAMEOVER, NEWGAME, LOADGAME, OPTION };
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input) 
//		{
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} 
//	while (input != GAMEOVER);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

// 문제5
#include <stdio.h>
int main()
{
	int input;
	enum { people, login, singup, option };
	do {
		printf("\n메뉴를 선택하세요.\n");
		printf("1.로그인 2.회원가입 3.옵션 (0 : 만든 사람들)\n");
		scanf("%d", &input);

		switch (input) 
		{
		case login:
			printf("  \n");
			break;
		case singup:
			printf("  \n");
			break;
		case option:
			printf("  \n");
			break;
		}
	} 
	while (input != GAMEOVER);

	printf("게임을 종료합니다.\n");
	return 0;
}
