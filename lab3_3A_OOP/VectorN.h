#pragma once
#include "Base.h"

class VectorN : public Base {
public:
    VectorN() : Base() {};
	VectorN(const int n, double* a) : Base(n, a) {};
	VectorN(const VectorN& v) : Base(v) {};

    VectorN Add(VectorN v);
	VectorN Substract(VectorN v);
	double  Scalar(VectorN v);

	VectorN& operator --();
	VectorN& operator ++();
 	VectorN  operator --(int);
 	VectorN  operator ++(int);

    VectorN& operator = (const VectorN&);
	VectorN  operator + (VectorN v) { return this->Add(v); }
	VectorN  operator - (VectorN v) { return this->Substract(v); }
	double   operator * (VectorN v) { return this->Scalar(v); }
};