#include <stdio.h>

int main() {

    FILE* fp;
    char name[20];
    int kor, eng, math;

    fopen_s(&fp, "score.txt", "rt");
    if (fp == NULL) {
        puts("������ �� �� �����ϴ�.\n");
        return -1;
    }
    //���� �б�
    //fscanf_s(fp, "%s", name, sizeof(name));
    fscanf_s(fp, "%s %d %d %d", name, sizeof(name), 
                  &kor, &eng, &math);
    
    //����Ϳ� ����
    //fprintf(stdout, "%s ", name);
    fprintf(stdout, "%s %d %d %d\n", name, kor, eng, math); 

    fclose(fp);

    return 0;
}