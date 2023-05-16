#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,r,n;
    
    scanf("%lf %lf %lf",&a,&r,&n);
    
    printf("%.0lf", a*pow(r,n-1));
    
}
