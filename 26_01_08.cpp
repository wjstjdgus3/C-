//16 페이지

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;//1000-10000
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500; //0-1500
//	int coin100 = rand() % 5000; //0-4999
//	coin100 = coin100 / 100 * 100;//0-4900
//	printf("그리고 과자의 가격은");
//	printf(" %d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}

//--------------------------------------------------------------
//17 페이지 

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple == 15) // apple이 15이면 실행
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple != 17) //apple이 17이 아니면 실행
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7) //apple이 7보다 크면 실행
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple < 20) //apple이 7보다 적으면 실행
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//--------------------------------------------------
//18 페이지

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple) //apple이 0이 아니면 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 10;
//	if (apple == 10) //apple이 10이면 실행
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}


//---------------------------------------------
//19 페이지

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) //apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else //if가 틀리면 (apple이 0이 아니면) 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

// 문제 1
//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("input 변수의 값 : ");
//	scanf("%d", &k);
//	if (k > 0)
//	{
//		printf("값은 양수 입니다.");
//	}
//	else if (k < 0)
//	{
//		printf("값은 음수 입니다.");
//	}
//	else 
//	{
//		printf("값은 0 입니다.");
//	}
//	return 0;
//}

// 문제 2
//#include <stdio.h>
//
//int main()
//{
//	int k;
//	printf("input 변수의 값 : ");
//	scanf("%d", &k);
//	if (k>=10 && k<=99)
//	{
//		printf("input은 두 자리 숫자입니다");
//	}
//	else 
//	{
//		printf("input은 두 자리 숫자가 아닙니다");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}


//--------------------------------------------
// 20 페이지

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if(height > 160)
//	{  // else if는 if가 틀렸을때만 실행된다
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

// 문제 3
//#include <stdio.h>
//
//int main()
//{
//	int age;
//	printf("본인 나이 : ");
//	scanf("%d", &age);
//	if (age > 0) 
//	{
//		printf("전체 관람가\n");
//	}
//	if (age >= 12 )
//	{
//		printf("12세 관람가\n");
//	}
//	if (age >= 15)
//	{
//		printf("15세 관람가\n");
//	}
//	return 0;
//}

// 문제 4
//#include <stdio.h>
//
//int main()
//{
//	char eng;
//	printf("initial : ");
//	scanf("%c", &eng);
//	if (eng>='A' && eng <= '0x5a')
//	{
//		printf("대문자");
//	}
//	else if (eng>=0x61 && eng<=0x7a)
//	{
//		printf("소문자");
//	}
//	else 
//	{
//		printf("영어가 아닙니다");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else /* number <= answer 인 경우 else 실행 */
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}


//-----------------------------------------------------
// 21 페이지

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer) {
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if(number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90){ //91~100
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80){ //81~90
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70){ //71~80
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60){ //61~70
//		printf("성적은 D등급입니다.\n");
//	}
//	else { //0~60
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}


//--------------------------------------
// 22 페이지

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0){
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0){
//		printf("number는 음수입니다.\n");
//	}
//	else {
//		printf("number는 0입니다.\n");
//	}
//	if(number % 2 == 0)
//	{   // 2로 나눈 나머지가 0이면 짝수
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{   // 2로 나눈 나머지가 1이면 짝수 
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}

 
// 문제 5

//#include <stdio.h>
//
//int main()
//{
//	char key ;
//		printf("방향키 : ");
//		scanf("%c", &key);
//		if (key == 'w')
//		{
//			printf("위 방향키를 입력하셨습니다.");
//		}
//		else if (key == 'a')
//		{
//			printf("좌 방향키를 입력하셨습니다.");
//		}
//		else if (key == 'd')
//		{
//			printf("우 방향키를 입력하셨습니다.");
//		}
//		else if (key == 's')
//		{
//			printf("아래 방향키를 입력하셨습니다.");
//		}
//		return 0;
//	}


