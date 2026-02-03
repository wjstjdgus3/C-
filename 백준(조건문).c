
// 두수 비교하기 

//#include <stdio.h>
//
//int main()
//{
//	int A, B;
//	printf("  ");
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
//	printf("시험 성적 :");
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
//        printf("1\n");
//    }
//    else
//    {
//        printf("0\n");
//    }
//    return 0;
//}


//-----------------------------
//오븐

//#include <stdio.h>
//
//int main()
//{
//	int A, B, C;
//	scanf("%d %d", &A, &B);
//	scanf("%d", &C);
//
//	int total = A * 60 + B + C;
//
//	int H = total / 60;
//	int M = total % 60;
//
//	printf("%d %d\n", H, M);
//	return 0;
//}

//--------------------------------------------
// 주사위 

//#include <stdio.h>
//
//int main() 
// {
//    int a, b, c;
//    int reward = 0;
//
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a == b && b == c) 
//    {
//        reward = 10000 + a * 1000;
//    }
//    else if (a == b || a == c) 
//    {
//        reward = 1000 + a * 100;
//    }
//    else if (b == c) 
//    {
//        reward = 1000 + b * 100;
//    } 
//    else 
//    {
//    int max = a;
//    if (b > max) max = b;
//    if (c > max) max = c;
//
//        reward = max * 100;
//    }
//    printf("%d\n", reward);
//
//    return 0;
//}