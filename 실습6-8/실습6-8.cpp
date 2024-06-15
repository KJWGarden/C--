#include <iostream>
using namespace std;

class Trace {
public:
	static string tagInf[100];
	static string debugInf[100];
	static int count;
	static void put(string tag, string debug) {
		tagInf[count] = tag;
		debugInf[count] = debug;
		count++;
	}
	static void print(string tag = "all") {
		if (tag == "all") {
			cout << "----- 모든 Trace 정보를 출력합니다. -----\n";
			for (int i = 0; i < count; i++) {
				cout << tagInf[i] << ":" << debugInf[i] << endl;
			}
		}
		else {
			cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. -----\n";
			for (int i = 0; i < count; i++) {
				if (tagInf[i] == tag) cout << tagInf[i] << ":" << debugInf[i] << endl;
			}
		}
	}
};

int Trace::count = 0;
string Trace::tagInf[100];
string Trace::debugInf[100];

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");
	Trace::print("f()");
	Trace::print();

}