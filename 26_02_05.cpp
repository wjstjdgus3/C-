
//----------------------------------------------------
// 6. 반복문, 구조체, 함수

// while()문

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//		if (i >= 70 && i < 80) { i++; continue; } //70번때는 건너뜀
//
//		if (1 % 10 == 9) printf("\n"); // 10개마다 줄 바꿈
//		if (i == 93) break; // loop를 나온다
//		i++;
//	}
//	return 0;
//}

// --------------------------
// 28페이지

//#include <stdio.h>
//int main()
//{
//	while (0) // 0 ==false
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	while (1) // 0아닌 수 == true
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3) // count가 0,1,2일 때 실행
//	{
//		printf("현재 Count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//
//		//count를 증가시켜 조건을 만족하지 못하게 함
//	}
//	return 0;
//}

//-----------------------------------------------
// 29페이지

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0) // count가 3,2,1일 때 실행
//	{
//		printf("현재 Count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//
//		//count를 감소시켜 조건을 만족하지 못하게 함
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count) //count가 0일 때 반복문이 끝남
//	{
//		if (count == 1)
//		{ //count가 1이면 {} 실행
//			break; //반복문 탈출
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//-----------------------
// 30페이지

//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1)
//	{ //무한 반복
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시 입력):");
//		scanf(" %c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else
//		{
//			continue;
//		}
//		printf("입력한 값 : %c\n", alphabet);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{ // 무한반복
//		printf("양수를 입력해 주세요.(0 입력시 종료)");
//		scanf("%d", &number); // number가 0이면 반복문 탈출
//		if (number == 0)
//		{
//			break;
//		}
//		// 음수이면 다시 입력 받음
//		else if (number < 0)
//		{
//			continue;
//		}
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//문제4

//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	int total = 1;
//	while (1)
//	{
//		total *= number;
//
//		if (total >= 50000)
//		{
//			break;
//		}
//		number++;
//	}
//
//	printf("최종값은 ");
//	printf("%d", number);
//	return 0;
//}

//문제5

#include <stdio.h>
int main()
{
	char alpha = 'A';
	
	while (alpha <= 'Z')
	{
		printf("알파벳 : %c\n", alpha);
		alpha++;
		if (alpha == 'F') 
		{
			alpha++;
		}
	}
	return 0;
}
