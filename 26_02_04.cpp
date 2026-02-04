
//--------------------------------------
// 27 페이지

// 문제7
//#include <stdio.h>
//int main()
//{
//	char w;
//	char a;
//	char d;
//	char s;
//	scanf("%c", &w, &a, &d, &s);
//
//	switch (w)
//	{
//	case 'w':
//	{
//		printf("위 방향키를 입력하셨습니다.\n", w);
//		break;
//	}
//	case 'a':
//	{
//		printf("좌 방향키를 입력하셨습니다.\n", a);
//		break;
//	}
//	case 'd':
//	{
//		printf("우 방향키를 입력하셨습니다.\n", d);
//		break;
//	}
//	case 's':
//	{
//		printf("아래 방향키를 입력하셨습니다.\n", s);
//		break;
//	}
//	}
//	return 0;
//}

// 문제 8
//#include <stdio.h>
//
//int main()
//{
//	int appetizer;
//	int mainDish;
//	int dessert;
//	printf("메뉴를 선택하세요.\n");
//	scanf("%d %d %d", &appetizer, &mainDish, &dessert);
//
//	switch (appetizer)
//	{
//	case 1:
//	{
//		printf("주문한 음식은 캐비어, ");
//		break;
//	}
//	case 2:
//	{
//		printf("주문한 음식은 샐러드, ");
//		break;
//	}
//	case 3:
//	{
//		printf("주문한 음식은 푸아그라, ");
//		break;
//	}
//	}
//	
//	switch (mainDish)
//	{
//	case 1:
//	{
//		printf("스테이크, ");
//		break;
//	}
//	case 2:
//	{
//		printf("생선요리, ");
//		break;
//	}
//	case 3:
//	{
//		printf("양갈비, ");
//		break; 
//	}
//	}
//
//	switch (dessert)
//	{
//	case 1:
//	{
//		printf("케익 입니다");
//		break;
//	}
//	case 2:
//	{
//		printf("아이스크림 입니다");
//		break;
//	}
//	case 3:
//	{
//		printf("초콜릿무스 입니다");
//		break;
//	}
//	}
//	
//	return 0;
//	}

//----------------------------------------------------
// 6. 반복문, 구조체, 함수

// while()문

#include <stdio.h>

int main()
{
	int i = 0;
	while (i < 100)
	{
		printf("%3d(%02x) ", i, i);
		if (i >= 70 && i < 80) { i++; continue; } //70번때는 건너뜀

		if (1 % 10 == 9) printf("\n"); // 10개마다 줄 바꿈
		if (i == 93) break; // loop를 나온다
		i++;
	}
	return 0;
}

