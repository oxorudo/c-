#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    char d;
    
    cin >> a >> d >> b >> d >> c;
    
    cout.width(2);
    cout.fill('0');
    cout << c << "-";
    cout.width(2);
    cout.fill('0');
    cout << b << "-";
    cout. width(4);
    cout.fill('0');
    cout << a << endl;
    
    return 0;
}
