#include "ComplexNumber.h"
#include <sstream>


ComplexNumber::ComplexNumber()
{
}
ComplexNumber::ComplexNumber(int real, int imaginary)
{
	set_real(real);
	set_imaginary(imaginary);
}

ComplexNumber::ComplexNumber(ComplexNumber a, ComplexNumber b)
{
	ComplexNumber::real = a.real + b.real;
	ComplexNumber::imaginary = a.imaginary + b.imaginary;
}

string ComplexNumber::get()
{
	stringstream zbroj;
	zbroj << "Kompleksni broj je:" << ComplexNumber::real << "+" << ComplexNumber::imaginary << "i" ;
	return zbroj.str();
}




void ComplexNumber::set_real(int real)
{
	this->real = real;
}

void ComplexNumber::set_imaginary(int imaginary)
{
	this->imaginary = imaginary;
}

