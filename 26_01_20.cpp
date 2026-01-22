
// 백준 문제

//#include <stdio.h>
//int main() 
//{
//    int A, B;
//    scanf("%d %d", &A, &B);
//    printf("%d", A + B);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	printf("%d", A - B);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	printf("%d", A * B);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double A, B;
//	scanf("%lf %lf", &A, &B);
//	printf("%.9lf", A / B);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	printf("%d\n", A + B);
//	printf("%d\n", A - B);
//	printf("%d\n", A * B);
//	printf("%d\n", A / B);
//	printf("%d\n", A % B);
//	return 0;
//}


// 불기 연도에서 543년을 M
//#include <stdio.h>
//
//int main()
//{
//	int A;
//	int B = 543;
//	scanf("%d", &A);
//	printf("%d",A-B);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int A, B, C;
//	scanf("%d %d %d", &A, &B, &C);
//	printf("%d\n", (A+B)%C);
//	printf("%d\n", ((A%C)+(B%C))%C);
//	printf("%d\n", (A*B)%C);
//	printf("%d\n", ((A%C)*(B%C))%C);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int A;
	int	B;
	scanf("%d %d", &A, &B);

	int B100 = B / 100;
	B100 = B % 100;
	int B10 = B / 10;
	B10 = B % 10;
	int B1 = B / 1;
			
	printf("%d\n",A*B1);
	printf("%d\n",A*B10);
	printf("%d\n",A*B100);
	printf("%d\n",(A*B1)+(A*B10)+(A*B100));
	return 0;
}
