
// 22 페이지

// 문제 6

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int gauge = (rand() % 100);
//	//printf("점수 : ");
//	//scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)
//	{
//		printf("\nPerfect");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("\nExccellent");
//	}
//	else
//	{
//		printf("\nGood");
//	}
//	return 0;
//}

// 문제 7

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("input : ");
//	scanf("%d", &input);
//	if (input %3 == 0)
//	{
//		printf("\ninput은 3의 배수입니다.");
//		
//		if (input % 6 == 0)
//		{
//			printf("\ninput은 6의 배수입니다.");
//		}
//		if (input % 9 == 0)
//		{
//			printf("\ninput은 9의 배수입니다.");
//		}
//	}
//	return 0;
//}

//-----------------------------------------
// 23 페이지 

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch(command)
//	{
//		case 'i':
//			printf("아이템창 오픈\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//--------------------------------
// 24 페이지

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break; //break로 멈춤
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char command ;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch(command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break; //break로 멈춤
//	case 'm': printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch(number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}


//문제 1

#include <stdio.h>

int main()
{
    int input1, input2;
    char oper;

    printf("두 정수와 연산자를 입력하세요 (예: 10 + 5):\n");

    scanf("%d %c %d", &input1, &oper, &input2);

	//페이지 13 참고

	switch(oper)
	{
	case '+': printf("%d + %d=%d", input1, input2, input1 + input2); break;
	case '-': printf("%d - %d=%d", input1, input2, input1 - input2); break;
	case '*': printf("%d * %d=%d", input1, input2, input1 * input2); break;
	case '/': printf("%d / %d=%d", input1, input2, input1 / input2); break;
	case '%': printf("%d % %d=%d", input1, input2, input1 % input2); break;
	}
	return 0;
}


