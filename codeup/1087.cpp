#include <iostream>
using namespace std;

int main(){
    int n,i,sum;
    scanf("%d",&n);
    
    for(i=1; ; i++){
        sum += i;
        if (sum >= n) {
            break;
        }
    }
    printf("%d", sum);
}
