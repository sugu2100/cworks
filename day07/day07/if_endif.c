/*#include <stdio.h>
#define VER 10  //ġȯ���� �ִ� ��ũ�θ� ����
#define BIT16   //ġȯ���� ���� ��ũ�� ����

int main() {

    int max = 0;

#if VER >= 10
    printf("���� %d�Դϴ�.", VER);
#endif
    
    printf("\n===================================\n");

#ifdef BIT16
    max = 32767;      //��ũ�θ� BIT16�� ���ǵǾ� ������
#else
    max = 2147483647; //��ũ�θ� BIT16�� ���ǵǾ� ���� ������
#endif
    printf("int�� ������ �ִ밪 : %d\n", max);

    return 0;
}*/