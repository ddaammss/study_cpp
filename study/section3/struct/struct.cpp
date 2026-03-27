#include <iostream>

using namespace std;

struct MyStruct{
    string name;
    int age;;
};

int main(){
    
    MyStruct s1 = {"홍길동", 20};
    MyStruct s2 = {"김철수", 30};

    cout << "s1의 이름은 " << s1.name << "이고, 나이는 " << s1.age << "입니다.\n";
    cout << "s2의 이름은 " << s2.name << "이고, 나이는 " << s2.age << "입니다.\n";

    return 0;
}