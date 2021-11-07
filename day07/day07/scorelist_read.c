#include <stdio.h>

int main() {

    FILE* fp;
    FILE* fout;
    char name[20];
    int no, kor, eng, math, tot;

    fopen_s(&fp, "scorelist.txt", "rt");
    if (fp == NULL) {
        puts("������ �� �� �����ϴ�.\n");
        return -1;
    }
    
    fopen_s(&fout, "scorelist2.txt", "wt");
    if (fout == NULL) {
        puts("������ �� �� �����ϴ�.\n");
        return -1;
    }

    fprintf(fout, "��ȣ �̸� ���� ���� ���� ���� ���\n");
    fprintf(stdout, "��ȣ �̸� ���� ���� ���� ���� ���\n");
    while (fscanf_s(fp, "%d %s %d %d %d", &no, name, sizeof(name),
        &kor, &eng, &math) != EOF) {
        tot = kor + eng + math;
        fprintf(fout, "%3d %s %3d %3d %3d %5d %3.1lf\n", 
            no, name, kor, eng, math, tot, (float)tot/3); //���Ͽ� ����
        fprintf(stdout, "%3d %s %3d %3d %3d %5d %3.1lf\n", 
            no, name, kor, eng, math, tot, (float)tot/3); //����Ϳ� ����
    }

    fclose(fp);
    fclose(fout);

    return 0;
}