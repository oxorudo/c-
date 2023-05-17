#include <iostream>

int main() {
    int n, i, j, x, y;
    int a[20][20] = {}; // 모든 값 0으로 초기화
    
    scanf("%d", &n);
    
    for(i=1; i<=19; i++){ // 값 받아서 그곳에 1 저장
        scanf("%d %d", &x, &y);
        a[x][y] = 1;
    }
    
    for(i=1; i<=19; i++){  //0행과 0열은 출력하지 않을 것이므로 1행 1열부터
        for(j=1; j<=19; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
