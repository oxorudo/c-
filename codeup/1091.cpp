#include <iostream>
using namespace std;

int main(){
    long long int a,m,d,n;
    int i;
    
    scanf("%lld %lld %lld %lld", &a,&m,&d,&n);
    
    for(i=1; i<n; i++) { // 입력받은 a가 첫항이므로 i=0이 아니고 i=1부터 시작
        a*=m;
        a+=d;
    }
    
    printf("%lld", a);
}
