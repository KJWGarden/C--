#include <iostream>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
	friend bool operator!(Book& op);
};

bool operator!(Book& op) {
	if (op.price == 0)
		return true;
	else
		return false;
}


int main() {
	Book book("�������", 0, 50);
	if (!book) cout << "��¥��" << endl;
}
