#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <fstream>

using namespace std;

class Complex
{
private:
	double re;
	double im;

public:  
	Complex(double re, double im);
	Complex();
	~Complex();
	void setRe(double re) {
		this->re = re;
	}
	void setIm(double im) {
		this->im = im;
	}
	double getRe() {
		return re;
	}
	double getIm() {
		return im;
	}
	Complex operator+(Complex b);
	Complex operator-(Complex b);
	Complex operator*(Complex b);
	Complex operator/(Complex b);
	friend ostream &operator<<(ostream &, Complex &);
	friend istream &operator>>(istream &, Complex &);
	void menu();
	void EnterOperation(Complex a, Complex b);
};

#endif // !COMPLEX_H
