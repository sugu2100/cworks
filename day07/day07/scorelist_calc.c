/*#include <stdio.h>

int main() {

    FILE* fp;
    FILE* fout;
    char name[20];
    int no, kor, eng, math, tot;
    double avg;

    fopen_s(&fp, "scorelist.txt", "rt");
    if (fp == NULL) {
        puts("파일을 열 수 없습니다.\n");
        return -1;
    }

    fopen_s(&fout, "scorelist2.txt", "wt");
    if (fout == NULL) {
        puts("파일을 열 수 없습니다.\n");
        return -1;
    }

    fprintf(fout, "번호 이름 국어 영어 수학 총점 평균\n");
    while (fscanf_s(fp, "%d %s %d %d %d", &no, name, sizeof(name),
        &kor, &eng, &math) != EOF) {
        tot = kor + eng + math;
        fprintf(fout, "%3d %3s %3d %3d %3d %3d %6.2lf\n", no, name, kor, eng, math, tot, (float)tot/3); //파일에 쓰기
        fprintf(stdout, "%d %s %d %d %d %d %3.1lf\n", no, name, kor, eng, math, tot, (float)tot/3); //모니터에 쓰기
    }

    fclose(fp);
    fclose(fout);

    return 0;
}*/