#include <iostream>
using namespace std;

class Matrix {
	int num[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		num[0] = a;
		num[1] = b;
		num[2] = c;
		num[3] = d;
 	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) {
			cout << this->num[i] << ' ';
		}
		cout << "}" << endl;
	}
	friend Matrix operator+(Matrix& a_matrix, Matrix& b_matrix);
	friend Matrix operator+=(Matrix& a_matrix, Matrix& b_matrix);
	friend bool operator==(Matrix& a_matrix, Matrix& b_matrix);
};

Matrix operator+(Matrix& a_matrix, Matrix& b_matrix) {
	Matrix s;
	for (int i = 0; i < 4; i++) {
		s.num[i] = a_matrix.num[i] + b_matrix.num[i];
	}
	return s;
}


Matrix operator+=(Matrix& a_matrix, Matrix& b_matrix) {
	for (int i = 0; i < 4; i++) {
		a_matrix.num[i] += b_matrix.num[i];
	}
	return a_matrix;
}


bool operator==(Matrix & a_matrix, Matrix& b_matrix) {
	for (int i = 0; i < 4; i++) {
		if (a_matrix.num[i] != b_matrix.num[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(), c.show();
	if (a == c) {
		cout << "a and c are the same" << endl;
	}
}
