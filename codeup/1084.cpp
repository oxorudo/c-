#include <iostream>
using namespace std;

int main(){
    int n,o,p,i,j,k;
    int count=0;
    
    scanf("%d %d %d",&n,&o,&p);
    
    for(i=0; i<n; i++){
        for(j=0; j<o; j++){
            for(k=0; k<p; k++){
                printf("%d %d %d\n", i,j,k);
                count++;
            }
        }
    }
    printf("%d\n",count);
}
