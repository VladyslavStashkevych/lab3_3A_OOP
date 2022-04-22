#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Base {
protected:
	int N;
	double* a;
public:
	Base();
	Base(const int, double*);
	Base(const Base&);

	void setN(int value) { N = value; }
	void setA(double* value);
	int     getN() const { return N; }
	double* getA() const { return a; }

	string toString();
	
	friend ostream& operator << (ostream&, Base&);
 	friend istream& operator >> (istream&, Base&);
};