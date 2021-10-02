#ifndef COMPLEX_HEADER_INCLUDED
#define COMPLEX_HEADER_INCLUDED

struct Complex_num {
	double real_part;
	double imag_part;

	Complex_num();
	Complex_num(double real_p, double imag_p);
	Complex_num(const Complex_num& another);
	~Complex_num() {};

	double complex_module() const;

	bool operator== (const Complex_num& another) const;
	bool operator!= (const Complex_num& another) const;

	Complex_num operator+ (const Complex_num& another) const;
	Complex_num operator- (const Complex_num& another) const;
	Complex_num operator* (const Complex_num& another) const;
	Complex_num operator- () const;
	Complex_num operator* (double num) const;
	Complex_num operator/ (double num) const;
	Complex_num& operator+= (const Complex_num& another);
	Complex_num& operator-= (const Complex_num& another);
	Complex_num& operator*= (const Complex_num& another);
	Complex_num& operator*= (double num);
	Complex_num& operator/= (double num);
	Complex_num& operator= (const Complex_num& another);
};

Complex_num operator+ (double num, const Complex_num& another);
Complex_num operator- (double num, const Complex_num& another);
Complex_num operator* (double num, const Complex_num& another);

std::istream& operator>>(std::istream& in, Complex_num& num);
std::ostream& operator<<(std::ostream& out, const Complex_num& num);

#endif