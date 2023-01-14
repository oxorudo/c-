#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a;
    cin >> a;
    cout << fixed;
    cout.precision(2);
    cout << round(a * 100) / 100 << endl;
    
    return 0;
}
