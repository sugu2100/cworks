/*#include <stdio.h>

int main() {

    FILE* fp;
    char name[20];
    int no, kor, eng, math;

    fopen_s(&fp, "scorelist.txt", "w");
    if (fp == NULL) {
        puts("������ ������ �� �����ϴ�.");
        return -1;
    }

    while (1) {
        printf("��ȣ(0�̸� ����): ");
        scanf_s("%d", &no);
        if (no <= 0) break;

        printf("�̸� �Է� : ");
        while (getchar() != '\n');
        gets(name);

        printf("���� ���� ���� ���� �Է� : ");
        scanf_s("%d %d %d", &kor, &eng, &math);

        //���Ͽ� ����
        fprintf(fp, "%d %s %d %d %d\n", no, name, kor, eng, math);
    }

    fclose(fp);

    return 0;
}*/