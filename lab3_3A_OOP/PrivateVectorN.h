#pragma once
#include "Base.h"

class PrivateVectorN : private Base {
public:
    PrivateVectorN() : Base() {};
	PrivateVectorN(const int n, double* a)  : Base(n, a) {};
	PrivateVectorN(const PrivateVectorN& v) : Base(v) {};

    PrivateVectorN  Add(PrivateVectorN v);
	PrivateVectorN  Substract(PrivateVectorN v);
	double          Scalar(PrivateVectorN v);

	PrivateVectorN& operator --();
	PrivateVectorN& operator ++();
 	PrivateVectorN  operator --(int);
 	PrivateVectorN  operator ++(int);

    PrivateVectorN& operator = (const PrivateVectorN&);
	PrivateVectorN  operator + (PrivateVectorN v) { return this->Add(v); }
	PrivateVectorN  operator - (PrivateVectorN v) { return this->Substract(v); }
	double          operator * (PrivateVectorN v) { return this->Scalar(v); }

    friend ostream& operator << (ostream&, PrivateVectorN&);
 	friend istream& operator >> (istream&, PrivateVectorN&);
};