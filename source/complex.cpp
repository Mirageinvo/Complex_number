#include <cmath>
#include "../includes/complex_header.hpp"


Complex_num::Complex_num() : real_part(0), imag_part(0) {}

Complex_num::Complex_num(double real_p, double imag_p) {
	real_part = real_p;
	imag_part = imag_p;
}

Complex_num::Complex_num(const Complex_num& another) {
	real_part = another.real_part;
	imag_part = another.imag_part;
}


double Complex_num::complex_module() const {
	return sqrt(real_part * real_part + imag_part * imag_part);
}

bool Complex_num::operator== (const Complex_num& another) const {
	if (fabs(real_part - another.real_part) < 1e-9 && fabs(imag_part - another.imag_part) < 1e-9)
		return true;
	return false;
}

bool Complex_num::operator!= (const Complex_num& another) const {
	if (fabs(real_part - another.real_part) < 1e-9 && fabs(imag_part - another.imag_part) < 1e-9)
		return false;
	return true;
}


Complex_num Complex_num::operator+ (const Complex_num& another) const {
	return Complex_num(real_part + another.real_part, imag_part + another.imag_part);
}

Complex_num Complex_num::operator- (const Complex_num& another) const {
	return Complex_num(real_part - another.real_part, imag_part - another.imag_part);
}

Complex_num Complex_num::operator* (const Complex_num& another) const {
	return Complex_num(real_part * another.real_part - imag_part * another.imag_part, 
			   		   real_part * another.imag_part + imag_part * another.real_part);
}

Complex_num Complex_num::operator- () const {
	return Complex_num(-real_part, -imag_part);
}

Complex_num Complex_num::operator* (double num) const {
	return Complex_num(real_part * num, imag_part * num);
}

Complex_num Complex_num::operator/ (double num) const {
	if (fabs(num) < 1e-9)
		return *this;
	return Complex_num(real_part / num, imag_part / num);
}

Complex_num& Complex_num::operator+= (const Complex_num& another) {
	real_part += another.real_part;
	imag_part += another.imag_part;
	return *this;
}

Complex_num& Complex_num::operator-= (const Complex_num& another) {
	real_part -= another.real_part;
	imag_part -= another.imag_part;
	return *this;
}

Complex_num& Complex_num::operator*= (const Complex_num& another) {
	double tmp_f = real_part * another.real_part - imag_part * another.imag_part;
	double tmp_s = real_part * another.imag_part + imag_part * another.real_part;
	real_part = tmp_f;
	imag_part = tmp_s;
	return *this;
}

Complex_num& Complex_num::operator*= (double num) {
	real_part *= num;
	imag_part *= num;
	return *this;
}

Complex_num& Complex_num::operator/= (double num) {
	if (fabs(num) < 1e-9) {
		return *this;
	}
	real_part /= num;
	imag_part /= num;
	return *this;
}

Complex_num& Complex_num::operator= (const Complex_num& another){
	real_part = another.real_part;
	imag_part = another.imag_part;
	return *this;
}

Complex_num operator+ (double num, const Complex_num& another) {
	return Complex_num(num + another.real_part, another.imag_part);
}

Complex_num operator- (double num, const Complex_num& another) {
	return Complex_num(num - another.real_part, another.imag_part);
}

Complex_num operator* (double num, const Complex_num& another) {
	return Complex_num(another.real_part * num, another.imag_part * num);
}