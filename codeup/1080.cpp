#include <iostream>
using namespace std;

int main()
{
    int a;
    int b=0;
    int sum=0;
    int count=0;
    scanf("%d",&b);
    for(a=1; a<=100; a++){
        sum+=a;
        count++;
        if(sum>=b) break;
        }
        printf("%d",count);
    
}
