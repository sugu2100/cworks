#include <stdio.h>

int main() {
    //�� ������ (��-1, ����-0)
    printf("10 == 10�� ���� %d�Դϴ�.\n", 10 == 10);  //1
    printf("10 != 10�� ���� %d�Դϴ�.\n", 10 != 10);  //0
    printf("10 > 10�� ���� %d�Դϴ�.\n", 10 > 10);    //0
    printf("10 >= 10�� ���� %d�Դϴ�.\n", 10 >= 10);  //1
    // (10 > 10) || (10 == 10)

    //���� ������(&&, ||, !)
    int a = 5;
    int b = 3;
    int c = 2;

    printf("0 && 0�� ���� %d�Դϴ�.\n", (a < b) && (b < c)); //0
    printf("0 && 1�� ���� %d�Դϴ�.\n", (a < b) && (b > c)); //0
    printf("1 && 1�� ���� %d�Դϴ�.\n", (a > b) && (b > c)); //1

    printf("0 || 0�� ���� %d�Դϴ�.\n", (a < b) || (b < c));  //0
    printf("0 || 1�� ���� %d�Դϴ�.\n", (a < b) || (b > c));  //1
    printf("1 || 0�� ���� %d�Դϴ�.\n", (a > b) || (b < c));  //1

    printf("!0�� ���� %d�Դϴ�.\n", !(a < b));  //1
    printf("!1�� ���� %d�Դϴ�.\n", !(b > c));  //0

    return 0;
}