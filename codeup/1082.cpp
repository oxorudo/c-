#include <iostream>
using namespace std;
 
int main(){
 
    int n;
    scanf("%X",&n);// 16진수로 입력
    
    for(int i = 1; i <= 15; i ++){
        printf("%X*%X=%X\n",n,i,n*i);// 정수를 16진수로 출력
        
    }
 
    return 0;
}
