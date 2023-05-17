#include <iostream>

int main(){
    
    int a[11][11] = {};
    
    int i,j,x,y;
    
    for(i=1; i<=10; i++){ // 주어지는 경로 입력
        for(j=1; j<=10; j++){
            scanf("%d ", &a[i][j]);
        }
    }
    
    x=y=2;
    
    while(1){
        if (a[x][y] == 0) { // while 문에서 이동 알고리즘과 탈출조건 만들어줌
            a[x][y] = 9;
            y++;
        }
        if (a[x][y] == 1){
            y--;
            x++;
        }
        if (a[x][y] == 2) {
            a[x][y] = 9;
            break;
        }
        if (a[x][y+1] == 1 && a[x+1][y] == 1) {
            if(a[x][y] == 0) 
            {
                a[x][y] = 9;
            }
            break;
        }
        
    }
    
    for(i=1; i<=10; i++){ // 결과 출력
        for(j=1; j<=10; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
