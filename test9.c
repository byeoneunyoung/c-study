#include<stdio.h>
int main(void)
{
	int n;
	printf("2자리수 정수 입력 (10~99)");
	scanf("%d", &n);
	if(n/10 == n%10)
		printf("Yes! 10의 자리와 1의 자리가 같습니다.");

	int a;
	printf("1~99 사이의 정수를 입력하시오. >>");
	scanf("d", &a);
	if(a/10 == 3 || 6 || 9 && a % 10 == 3 || 6 || 9)
		printf("박수 짝짝");
	if(a/10 == 3 || 6 || 9 || a % 10 == 3 || 6 || 9)
		printf("박수 짝")

	
	return 0;
}
	
		
