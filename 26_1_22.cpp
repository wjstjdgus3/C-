
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

#include <stdio.h>
int main()
{
	int number;
	int option = 3;
	printf("메뉴를 선택하세요");
	printf("1.새 게임 2.이어하기 3.옵션\n");
	scanf("d", &input);

	switch (input)
	{
	case 1 :
		printf("새 게임 시작.\n");
		break;
	case 2 :
		printf("세이브 테이터 로드.\n");
		break;
	case option:
		printf("옵션 세팅.\n");
		break;
	default:
		printf("지정된 기능이 없습니다.\n");
	}
	return 0;
}



