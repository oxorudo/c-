#include <iostream>
using namespace std;

int main(){
    int a;
    int b,c,d,e,f,i;
    
    cin >> a;
    
    f = a % 10;
    a /= 10;
    e = (a % 10) * 10;
    a /= 10;
    d = (a % 10) * 100;
    a /= 10;
    c = (a % 10) * 1000;
    a /= 10;
    b = (a % 10) * 10000;
    
    cout << "[" << b << "]" << endl;
    cout << "[" << c << "]" << endl;
    cout << "[" << d << "]" << endl;
    cout << "[" << e << "]" << endl;
    cout << "[" << f << "]" << endl;
}

//반복문으로 풀 수 없을까??
