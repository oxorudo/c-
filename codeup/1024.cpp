#include <iostream>
using namespace std;

int main(){
    char a[50];
    int i;
    
    cin >> a;
    
    for(i = 0; a[i] != NULL; i++)
    {
        cout << "\'" << a[i] << "\'" << endl;
        
    }
    return 0;
}
