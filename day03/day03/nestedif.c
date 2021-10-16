#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//내부 if문
	//수가 10이상 짝수인 경우
	//수가 10이상 홀수인경우
	//수가 10보다 작고 짝수인 경우
	//수가 10보다 작은 홀수
	int num;
	printf("수를 입력하세요: ");
	scanf_s("%d", &num);

	//if~ else if~ else
	if (num >= 10 && num % 2 == 0) {
		printf("%d는 10 이상의 짝수입니다.\n", num);
	}
	else if (num >= 10 && num % 2 != 0) {
		printf("%d는 10 이상의 홀수입니다.\n", num);
	}
	else if (num < 10 && num % 2 == 0) {
		printf("%d는 10 미만의 짝수입니다.\n", num);
	}
	else{
		printf("%d는 10 미만의 홀수입니다.\n", num);
	}


	/*if (num >= 10) {
		if (num % 2 == 0) {
			printf("%d는 10이상의 짝수입니다.\n", num);
		}
		else {
			printf("%d는 10이상의 홀수입니다.\n", num);
		}
	}
	else {
		if (num % 2 == 0) {
			printf("%d는 10보다 작은 짝수입니다.\n", num);
		}
		else {
			printf("%d는 10보다 작은 홀수입니다.\n", num);
		}
	}*/


	return 0;
}