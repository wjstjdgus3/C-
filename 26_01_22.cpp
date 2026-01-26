
//----------------------------------------
// 25 페이지

//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽이동 \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		// case를여러개 써서 같은 코드 실행 가능 
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("메뉴를 선택하세요");
//	printf(" 1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 1 : printf("새 게임 시작.\n"); break;
//	case 2 : printf("세이브 테이터 로드.\n");	break;
//	case option : printf("옵션 세팅.\n"); break;
//	default : printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력 하세요\n");
//	scanf("%d", &input);
//
//	switch (input)
//	{
//	case 3:case 6:case 9: printf("짝\n"); break;
//	default: printf("지정되지 않았습니다.\n");
//	}
//	return 0;
//}

//----------------------------------------------
//26 페이지

//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//
//	switch(command)
//	{
//	case 'x' : printf("알파벳 x 입력.\n"); break;
//	case 'X': printf("엑스표 입력.\n"); break;
//		//중복된 case값을 사용할 수 없다.
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: // brace({}) 추가
//	{
//		int number1, number2;
//		// switch내부에 변수 선언할 때 {}필요
//
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n",
//			number1, number2, number1 + number2);
//		break;
//	}
//	case 2: // brace({}) 추가
//	{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n",
//			number3, number4, number3 + number4);
//		break;
//	} // brace({}) 추가
//	}
//		return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char key;
//	printf("방향키를 입력 하시오.\n");
//	scanf("%c", &key);
//
//	switch (key)
//	{
//	case 'w': printf("위 방향키를 입력하셨습니다.\n"); break;
//	case 'a': printf("좌 방향키를 입력하셨습니다.\n"); break;
//	case 'd': printf("우 방향키를 입력하셨습니다.\n"); break;
//	case 's': printf("아래 방향키를 입력하셨습니다.\n"); break;
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int Appetizer;
	printf("Appetizer : 1.캐비어 2.샐러드 3.푸아그라 \n");
	scanf("%d", &Appetizer);
	int MainDish;
	printf("MainDish : 1.스테이크 2.생선요리 3.양갈비 \n");
	scanf("%d", &MainDish);
	int Dessert;
	printf("Dessert : 1.케익 2.아이스크림 3.초콜릿무스 \n");
	scanf("%d", &Dessert);

	char app = "";
	char main = "";
	char des = "";

	switch (Appetizer)
	{
	case 1: app = "캐비어"; break;
	case 2: app = "샐러드"; break;
	case 3: app = "푸아그라"; break;
	}
	switch (MainDish)
	{
	case 1: main = "스테이크"; break;
	case 2: main = "생선요리"; break;
	case 3: main = "양갈비"; break;
	}
	switch (Dessert)
	{
	case 1: des = "케익"; break;
	case 2: des = "아이스크림"; break;
	case 3: des = "초콜릿무스"; break;
	}
	
	printf("주문한 음식은 %s, %s, %s 입니다\n",app,main,des);
	return 0;
}

