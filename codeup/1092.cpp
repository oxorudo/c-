#include <iostream>

int main() {
    int d1,d2,d3;
    int day;
    
    scanf("%d %d %d", &d1,&d2, &d3);
    
    day = 1;
    
    while (day%d1!=0||day%d2!=0||day%d3!=0) day++; // 세 방문 주기의 최소공배수가 될 때 반복문 종료
    
    printf("%d",day);
    
}
