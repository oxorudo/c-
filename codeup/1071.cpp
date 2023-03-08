#include <iostream>
using namespace std;

int main(){
     int n;
    reload: //레이블 이름 : reload
     scanf("%d", &n);
     if(n!=0){ // n이 0이 아닐때만 n 출력해주고 goto reload;
      printf("%d\n", n);
      goto reload;
      }
}
