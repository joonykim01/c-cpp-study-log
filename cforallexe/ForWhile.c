///* sum 1~19 */
//#include <stdio.h>
//int main() {
//	int i, sum = 0;
//	for (i = 0; i < 20; i++)
//	{
//		sum = sum + i;
//	}
//	printf("1부터 19까지의 합 : %d", sum);
//	return 0;
//}

///* break! */
//#include <stdio.h>
//int main() {
//	int usranswer;
//
//	printf("컴퓨터가 생각한 숫자를 맞춰보세요! \n");
//
//	for (;;)
//	{
//		scanf("%d", &usranswer);
//		if (usranswer == 3)
//		{
//			printf("정답입니다. \n");
//			break;
//		}
//		else
//		{
//			printf("틀렸습니다. \n");
//		}
//	}
//
//	return 0;
//}

/* 5의 배수를 제외한 숫자 출력 */
//#include <stdio.h>

//int main() {
//	int i;
//
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 5 == 0) continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

/* 구구단 */
//#include <stdio.h>
//int main() {
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			printf("%d * %d = %d \n", i, j, i * j);
//		}
//	}
//	
//	return 0;
//}

/* while */
//#include <stdio.h>
//int main() {
//	int i = 1, sum = 0;
//
//	while (i <= 100) {
//		sum += i;
//		i++;
//	}
//
//	printf("1부터 100 까지의 합 : %d \n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int i = 1, sum = 0;
//
//	do
//	{
//		sum += i;
//		i++;
//	} while (i < 1);
//
//	printf("sum : %d \n", sum);
//
//	return 0;
//}

/* problem 1 triangle */
//#include <stdio.h>
//int main() {
//	int lines, stars, space, i;
//	printf("몇 줄의 삼각형을 출력할까요? ");
//	scanf("%d", &lines);
//
//	for (i = 1; i <= lines; i++)
//	{
//		for (stars = 0; stars < lines - i; stars++)
//		{
//			printf(" ");
//		}
//		for (stars = 0; stars < (2 * i -1); stars++)
//		{
//			printf("*");
//		}
//		for (stars = 0; stars < lines - i; stars++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/* p2 reverse triangle */
//#include <stdio.h>
//int main() {
//	int lines, stars, space, i;
//	printf("몇 줄짜리 삼각형을 출력할까요? ");
//	scanf("%d", &lines);
//
//	for (i = 1; i <= lines; i++)
//	{
//		for (space = 0; space < i - 1; space++)
//		{
//			printf(" ");
//		}
//		for (stars = 0; stars < (2 * lines + 1 - 2 * i); stars++)
//		{
//			printf("*");
//		}
//		for (space = 0; space < i - 1; space++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/* p3 1000 이하의 3또는 5의 배수인 자연수들의 합을 구한다 */
//#include <stdio.h>
//int main() {
//	int i = 1, sum = 0;
//	while (i <= 1000) {
//		if ((i % 3 == 0) || (i % 5 == 0))
//		{
//			sum = sum + i;
//		}
//		i++;
//	}
//	printf("1000 이하의 3 또는 5의 배수인 자연수들의 합은 %d 이다. \n", sum);
//
//	return 0;
//}

