#include "complex.h"

Complex::Complex(double re, double im) {
	//this->re = re;
	//this->im = im;
}

Complex::~Complex() {

}

Complex::Complex() {
	//this->re = 0.0;
	//this->im = 0.0;
}

Complex Complex::operator+(Complex b) {
	Complex a = *this, result;
	result.re = a.re + b.re;
	result.im = a.im + b.im;
	return result;
}

Complex Complex::operator-(Complex b) {
	Complex a = *this, result;
	result.re = a.re - b.re;
	result.im = a.im - b.im;
	return result;
}

Complex Complex::operator*(Complex b) {
	Complex a = *this, result;
	result.re = a.re * b.re - a.im * b.im;
	result.im = a.re * b.im + a.im * b.re;
	return result;
}

Complex Complex::operator/(Complex b) {
	Complex a = *this, result;
	double x1, x2, x3;
	x1 = (a.re * b.re) + (a.im * b.im);
	x2 = (b.re * a.im) - (a.re * b.im);
	x3 = (b.re * b.re) + (b.im * b.im);

	result.re = x1 / x3;
	result.im = x2 / x3;

	return result;
}

istream &operator>>(istream &in, Complex &c) {
	in >> c.re;
	in >> c.im;
	return in;
}

ostream &operator<<(ostream &out, Complex &c) {
	double Re, Im;
	if (c.im < 0) {
		out << c.re << "+i(" << c.im << ")" << endl;
		Re = c.re;
		Im = c.im;
	}
	else {
		out << c.re << "+" << c.im << "i" << endl;
		Re = c.re;
		Im = c.im;
	}

	ofstream f;
	f.open("C:\\Users\\Àíäðåé\\Desktop\\complex.txt", ios::out);
	f << Re << "\t";
	f << Im;
	f.close();

	return out;
}

void Complex::menu() {
	cout << "1 - Addition (+)\n" <<
		"2 - Subtraction (-)\n" <<
		"3 - Multiplication (x)\n" <<
		"4 - Division (/)\n" <<
		"Select an operation: ";
}

void Complex::EnterOperation(Complex a, Complex b) {
	Complex result;
	char op;
	cin >> op;
	switch (op) {
	case '+': {
		result = a + b;
		cout << result;
	}
			  break;
	case '-': {
		result = a - b;
		cout << result;
	}
			  break;
	case 'x': {
		result = a * b;
		cout << result;
	}
			  break;
	case '/': {
		result = a / b;
		cout << result;
	}
			  break;
	default: {
		cout << "Unknown action" << endl;
		break;
	}
	}
}
