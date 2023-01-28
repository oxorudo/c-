#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    getline(cin,a); // string 라이브러리에 포함된 함수. cin >> 은 공백을 포함하지 않기 때문에 대신 써주는 함수. 원하는 구분자를 만날때까지 입력받아 string에 저장
    cout << a << endl; // getline(입력스트림 오브젝트, 문자열을 저장할 string객체, 종결 문자) ex) getline(cin, str);
    
    return 0;
}
