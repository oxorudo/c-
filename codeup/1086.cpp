#include <iostream>
using namespace std;

int main(){
    double w,h,b;
    double result;
    
    scanf("%lf %lf %lf", &w,&h,&b);
    
    result = w*h*b / 8388608;
    
    printf("%.2lf MB",result);
}
