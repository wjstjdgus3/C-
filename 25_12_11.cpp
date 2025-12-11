//#include <stdio.h>
//int main()
//{
//    printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("안녕하세요");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개\n", keyboard);
//	printf("마우스: %d개\n", mouse);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char radius = 5;
//	float pi = 3.14;
//	// 반지름*반지름*원주율
//	double area = radius * radius * pi;
//	printf("원의 넓이 : %.2lf\n", area);
//	// 2*반지름*원주율
//	float circumference = 2 * radius * pi;
//	printf("원의 둘레 : %.1f\n", circumference);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int upperedge = 5;
//	int baseline = 3;
//	int height = 7;
//		// (윗변 + 밑변) * 높이 / 2
//	double area = (upperedge + baseline) * height / 2;
//		printf("사다리꼴 넓이 : %lf\n", area);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int k;
	printf("원하는 숫자를 입력 : ");
	scanf("%d", &k); //vs: scanf_s 
	printf("입력한 숫자는 : %d\n", k);
	return 0;
}