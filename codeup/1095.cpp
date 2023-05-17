#include <iostream>

int main() {
    int n, i;
    int min = 10001; // 최솟값 저장 변수. 1~10000 사이의 수를 주므로 min 첫값 : 10001이 적당함.
    int a[10001]={};
    
    scanf("%d", &n); //개수 입력 받기
    
    for(i=1; i<=n; i++){ //개수 만큼 입력 받기
    scanf("%d", &a[i]); //읽어서 순서대로 배열에 넣는다.
    if (a[i] < min) { // 만약 방금 받은 값이 min보다 작으면 min에 그 값 저장
        min = a[i];
    }
    
    }
    
    printf("%d", min); // 최솟값 출력
}
