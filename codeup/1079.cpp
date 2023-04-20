#include <iostream>
using namespace std;

int main()
{
    char c;
    while(1){
        scanf("%c",&c);
        printf("%c",c);
        if(c=='q') {
            break;
        }
    }
}
