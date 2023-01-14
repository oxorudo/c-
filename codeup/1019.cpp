#include <iostream>

using namespace std;

int main(){
    int y,m,d;
    char c;
    
    cin >> y >> c >> m >> c >> d;
    cout.width(4);
    cout.fill('0');
    cout << y << c;
    cout.width(2);
    cout.fill('0');
    cout << m << c;
    cout.width(2);
    cout.fill('0');
    cout << d << endl;
    
    
    return 0;
}
