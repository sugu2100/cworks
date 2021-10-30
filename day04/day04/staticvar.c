#include <stdio.h>

void count() {
    static int x = 0;        //지역변수 
    int y = 0; //정적(고정) 변수(static 키워드 사용)
    x += 1;
    y += 1;
    printf("x = %d, y = %d\n", x, y);
}

int main() {
    //x(정적변수)는 소멸되지 않고 유지됨, 
    //y(지역변수)는 계산후 소멸(해제)
    count();  
    count();
    count();

    return 0;
}