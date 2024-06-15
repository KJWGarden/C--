#include <iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
	void append(Buffer &buf , string next) {
		buf.add(next);
	}
};

Buffer& append(Buffer& buf_s, string add_s) {
	buf_s.add(add_s);
	return buf_s;
}


int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}