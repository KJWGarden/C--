#include <iostream>
using namespace std;

class Rect; // 2. 컴파일 오류를 해결하기 위해 클래스 원형을 선언해 뒤에 선언부가 있을것이라고 컴파일에게 알려줌
bool equals(Rect r, Rect s); // 1. 해당 함수를 선언 할때 Rect 클래스 참조 하지만 Rect 클래스 선언 되어 있지 않아 컴파일 오류 발생

class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend bool equals(Rect r, Rect s); // 프렌드 함수 선언
};

bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) return true; // equals 함수는 외부함수 임에도 프렌드 함수 선언이 되었기 때문에 private 속성을 가진 width, height에 접근할 수 있다
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}