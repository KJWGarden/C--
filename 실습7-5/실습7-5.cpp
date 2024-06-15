#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }

	friend Color operator+(Color& op, Color b);
	friend bool operator==(Color& op, Color a);
};

Color operator+(Color& op, Color b) {
	Color a;
	a.red = op.red + b.red;
	a.green = op.green + b.green;
	a.blue = op.blue + b.blue;
	return a;
}

bool operator==(Color& op, Color a) {
	if (op.red == a.red && op.blue == a.blue && op.green == a.green)
		return true;
	else
		false;
}



int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}