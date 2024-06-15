#include <iostream>
using namespace std;

class Rect; // 2. ������ ������ �ذ��ϱ� ���� Ŭ���� ������ ������ �ڿ� ����ΰ� �������̶�� �����Ͽ��� �˷���
bool equals(Rect r, Rect s); // 1. �ش� �Լ��� ���� �Ҷ� Rect Ŭ���� ���� ������ Rect Ŭ���� ���� �Ǿ� ���� �ʾ� ������ ���� �߻�

class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend bool equals(Rect r, Rect s); // ������ �Լ� ����
};

bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) return true; // equals �Լ��� �ܺ��Լ� �ӿ��� ������ �Լ� ������ �Ǿ��� ������ private �Ӽ��� ���� width, height�� ������ �� �ִ�
	else return false;
}

int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}