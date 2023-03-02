#include <iostream>
using namespace std;

int main(){
    char c;
    
    cin >> c;
    
    switch(c)
    {
        case 'A': 
        printf("best!!!");
        break;
        case 'B': 
        printf("good!!");
        break;
        case 'C':
        printf("run!");
        break;
        case 'D':
        printf("slowly~");
        break;
        default:
        printf("what?");
        break;
    }
}
