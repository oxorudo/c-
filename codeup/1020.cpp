#include <iostream>
using namespace std;
int main(){
    char a;
    int n1,n2;
    
    cin >> n1 >> a >> n2;
    cout.width(6);
    cout.fill('0');
    cout << n1;
    cout.width(7);
    cout.fill('0');
    cout << n2 << endl;
    
    return 0;
}
