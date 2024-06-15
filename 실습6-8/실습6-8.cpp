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
			cout << "----- ��� Trace ������ ����մϴ�. -----\n";
			for (int i = 0; i < count; i++) {
				cout << tagInf[i] << ":" << debugInf[i] << endl;
			}
		}
		else {
			cout << "----- " << tag << "�±��� Trace ������ ����մϴ�. -----\n";
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
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");
	Trace::print("f()");
	Trace::print();

}