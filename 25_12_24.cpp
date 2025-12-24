//12페이지

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k); //vs: scanf_s 
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x); //scanf_s
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int radius;
//	float pi = 3.14;
//	printf("반지름 : ");
//	scanf("%d", &radius);
//	double area = radius * radius * pi;
//	printf("원의 넓이는 %lf 입니다.\n", area);
//// 원의 넓이 : 반지름 * 반지름 * 원주율(π)
//	float circumference = 2 * pi * radius;
//	printf("원의 길이는 %f 입니다.\n", circumference);
//// 원의 길이 : 원의 둘레 = 2 *π * r
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	// 사다리꼴 넓이 : (윗변 + 밑변) * 높이 / 2
//	int upperedge;
//	int baseline;
//	int height;
//	printf("윗변 : ");
//	scanf("%d", &upperedge);
//	printf("밑변 : ");
//	scanf("%d", &baseline);
//	printf("높이 : ");
//	scanf("%d", &height);
//	double area = (upperedge + baseline) * height / 2.0;
//	printf("사다리꼴의 넓이는 %lf 입니다.\n", area);
//	return 0;
//}

//------------------------------------------------------------------

//13페이지

//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a+b);
//	printf("%d - %d = %d\n", a, b, a-b);
//	printf("%d * %d = %d\n", a, b, a*b);
//	printf("%d / %d = %d\n", a, b, a/b);
//	printf("%d %% %d = %d\n", a, b, a%b);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3;
//	printf("%2d\n", number);
//	number -= 2;
//	printf("%2d\n", number);
//	number--;
//	printf("%2d\n", number);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b;
//	printf("변수1 : ");
//	scanf("%d", &a);
//	printf("변수2 : ");
//	scanf("%d", &b);
//	printf("\n%d + %d = %d\n", a, b, a+b);
//	printf("%d - %d = %d\n", a, b, a-b);
//	printf("%d * %d = %d\n", a, b, a*b);
//	printf("%d / %d = %d\n", a, b, a/b);
//	printf("%d %% %d = %d\n", a, b, a%b);
//	return 0;
//}

//---------------------------------------------------------

//14페이지

//#include <stdio.h>
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d number1 %%4\n", number1 %4);
//	printf("%d number2 %%3\n", number2 %3);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int sencond = 2 % 3;
//	printf("%d = 2%%3\n", sencond);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int six = 6 % 3;
//	printf("%d = 6%%3\n", six);
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("숫자 : ");
//	scanf("%d", &num);
//	short end = num % 50;
//	printf("\n정답은 %hd 입니다\n", end);
//	return 0;
//}

//---------------------------------------------------------------

//15페이지

//#include <stdio.h>
//
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d=6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d=6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d=6/4\n", data3);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.\n");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int coin;
//	printf("젤리 가격은??(원)");
//	scanf("%d", &coin);
//
//	int balance = 1000 - coin;
//
//	int coin500 = balance / 500;
//	coin = coin % 500;
//	int coin100 = balance / 100;
//	coin = coin % 100;
//	int coin50 = balance / 50;
//	coin = coin % 50;
//	int coin10 = balance / 10;
//	coin = coin % 10;
//	printf("500원 %d개, ", coin500);
//	printf("100원 %d개, ", coin100);
//	printf("50원 %d개, ", coin50);
//	printf("10원 %d개, ", coin10);
//
//	return 0;
//}


//--------------------------------------

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
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//	
//	return 0;
//}
