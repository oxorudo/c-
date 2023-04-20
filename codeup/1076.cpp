#include <iostream>
using namespace std;

int main(){
    
    char j;
    char i='a';
    scanf("%c",&j);
    
    do
    {
        printf("%c ",i);
        i++;
    }
    while(j>=i);
    
    return 0;
}
