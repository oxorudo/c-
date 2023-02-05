#include <iostream>
using namespace std;

int main(){
    long long a,b,c,num;
    
    
    cin >> a >> b >> c;
    num = a+b+c;
    cout << num << endl;
    
    float avg = (float)num / 3;
    cout << fixed;
    cout.precision(1);
    cout << avg << endl;
    
    
    return 0;
}
