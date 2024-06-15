#include <iostream>
using namespace std;

int big(int a, int b, int c = 0) {
	int big_num = 0;
	if (100 < a || 100 < b || 100 < c) {
		big_num = 100;
	}
	else {
		if (a > b) {
			if (a > c) {
				big_num = a;
			}
			else
				big_num = c;
		}
		else if (b > a) {
			if (b > c) {
				big_num = b;
			}
			else
				big_num = c;
		}
		else if (c > a) {
			if (c > b) {
				big_num = c;
			}
			else
				big_num = b;
		}
	}
	return big_num;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}
