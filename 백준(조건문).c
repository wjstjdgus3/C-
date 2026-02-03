
// 두수 비교하기 

//#include <stdio.h>
//
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	if (A > B)
//	{
//		printf(">");
//	}
//	else if (A < B)
//	{
//		printf("<");
//	}
//	else
//	{
//		printf("==");
//	}
//	return 0;
//}


//------------------------------
//시험 성적

//#include <stdio.h>
//
//int main()
//{
//	int A;
//	scanf("%d", &A);
//	if (90 <= A && A <= 100)
//	{
//		printf("A");
//	}
//	else if (80 <= A && A <= 89)
//	{
//		printf("B");
//	}
//	else if (70 <= A && A <= 79)
//	{
//		printf("C");
//	}
//	else if (60 <= A && A <= 69)
//	{
//		printf("D");
//	}
//	else
//	{
//		printf("F");
//	}
//	return 0;
//}


//------------------------------
// 윤년

//#include <stdio.h>
//
//int main()
//{
//    int year;
//    scanf("%d", &year);
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//    {
//        printf("1");
//    }
//    else
//    {
//        printf("0");
//    }
//    return 0;
//}

//---------------------------------------------------
//사분면

//#include <stdio.h>
//
//int main()
//{
//    int A, B;
//    scanf("%d\n", &A);
//    scanf("%d", &B);
//
//	if (0 <= A && B >= 0)
//	{
//		printf("1");
//	}
//	else if (0 >= A && B >= 0)
//	{
//		printf("2");
//	}
//	else if (0 >= A && B <= 0)
//	{
//		printf("3");
//	}
//	else
//	{
//		printf("4");
//	}
//    return 0;
//}

//-------------------------------------
// 알람 시계

//#include <stdio.h>
//int main()
//{
//	int A;
//	int B;
//	scanf("%d %d", &A, &B);
//
//	int total = (A + 24) * 60 + B - 45;
//
//	int H = total / 60;
//	int M = total % 60;
//
//
//	int day = H/24;
//	H = H % 24;
//
//	printf("%d %d", H, M);
//	return 0;
//}

//-----------------------------
//오븐

//#include <stdio.h>
//int main()
//{
//	int A, B, C;
//	scanf("%d %d", &A, &B);
//	scanf("%d", &C);
//
//	int total = (A +24) * 60 + B + C;
//
//	int H = total / 60;
//	int M = total % 60;
//	
//	int day = H/24;
//	H = H % 24;
//
//	printf("%d %d", H, M);
//	return 0;
//}

//--------------------------------------------
// 주사위 

#include <stdio.h>

int main() 
 {
    int a, b, c;
    int  = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) 
    {

