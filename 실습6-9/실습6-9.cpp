#include <iostream>
using namespace std;

class Board {
public:
	static void add(string write) {
		coment[cnt] = write;
		cnt++;
	}
	static void print() {
		cout << "********** �Խ����Դϴ�. **********\n";
		for (int i = 0; i < cnt; i++)
			cout << i << ": " << coment[i] << endl;
		cout << endl;
	}
	static int cnt;
	static string* coment;
};

int Board::cnt = 0;
string* Board::coment = new string[100];

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}