
// 백준 문제

//#include <stdio.h>
//int main()
//{
//	long long int A, B, C;
//	scanf("%lld %lld %lld", &A, &B, &C);
//	long long int sum = A + B + C;
//	printf("%lld\n", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("\\    /\\ \n");
//	printf(" )  ( ') \n");
//	printf("(  /  ) \n");
//	printf(" \\(__)| \n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("|\\_/|\n");
//	printf("|q p|   /}\n");
//	printf("( 0 )\"\"\"\\\n");
//	printf("|\"^\"`    |\n");
//	printf("||_/=\\\\__|\n");
//	return 0;
//}


// 24페이지

//문제 1

//#include <stdio.h>
//
//int main()
//{
//	int in1, in2;
//	char oper;
//
//	printf("계산 입력 값 : ");
//	scanf("%d %c %d", &in1, &oper, &in2);
//
//	//페이지 13 참고
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", in1, in2, in1+in2); break;
//	case '-': printf("%d - %d = %d", in1, in2, in1-in2); break;
//	case '*': printf("%d * %d = %d", in1, in2, in1*in2); break;
//	case '/': printf("%d / %d = %d", in1, in2, in1/in2); break;
//	case '%': printf("%d %% %d = %d", in1, in2, in1%in2); break;
//	}
//	return 0;
//}

// 문제 2

// 1=January | 2=February | 3=March | 4=April | 5=May | 6=June | 
// 7=July | 8=August | 9=September | 10=October | 11=November | 12=December

//#include <stdio.h>
//int main()
//{
//	int in;
//	printf("몇월? ");
//	scanf("%d", &in);
//
//	switch (in)
//	{
//	case 1: printf("January"); break;
//	case 2: printf("February"); break;
//	case 3: printf("March"); break;
//	case 4: printf("April"); break;
//	case 5: printf("May"); break;
//	case 6: printf("June"); break;
//	case 7: printf("July"); break;
//	case 8: printf("August"); break;
//	case 9: printf("September"); break;
//	case 10: printf("October"); break;
//	case 11: printf("November"); break;
//	case 12: printf("December"); break;
//	}
//	return 0;
//}

//----------------------------------------
// 25 페이지

#include <stdio.h>
int main()
{
	char command;
	printf("<, a 왼쪽 이동 \n");
	printf(">, d 오른쪽이동 \n");
	scanf("%c", &command);
	switch(command)
	{
case '<' :
case 'a' :
	// case를여러개 써서 같은 코드 실행 가능 
	printf("왼쪽으로 이동합니다.\n");
	break;
case '>': case 'd':
	printf("오른쪽으로 이동합니다.\n");
	break;
	}
	return 0;
}




