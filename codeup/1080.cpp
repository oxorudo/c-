#include <iostream>
using namespace std;

int main()
{
    int a;
    int b=0;
    int sum=0;
    scanf("%d",&b);
    for(a=1; a<=100; a++){
        sum+=a;
        if(sum>=b) break;
        }
        printf("%d",a);
    
}

