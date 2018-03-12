#pragma once

#include <string>


using namespace std; 

class ComplexNumber
{
public:
	void set_real(int real);
	void set_imaginary(int imaginary);
	ComplexNumber();
	ComplexNumber(int real, int imaginary);
	ComplexNumber(ComplexNumber a, ComplexNumber b);
	string get();


private:
	int real;
	int imaginary;

};

