#include <iostream> 

using namespace std;
// 일반 함수 - 함수 호출할 때마다 그 함수가 있는 메모리 위치로 이동했다가 돌아옴
// 인라인 함수 - 이동 없이 그 자리에 코드를 복사 붙여넣기
inline void printMessage() {
    cout << "This is an inline function." << endl;
}
int main() {
    printMessage();
    return 0;
}