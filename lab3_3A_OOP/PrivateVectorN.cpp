#include "PrivateVectorN.h"

PrivateVectorN PrivateVectorN::Add(PrivateVectorN v) {
	double *arr;
	if (N != v.N) {
		cout << "Vectors should have same size!";
		return PrivateVectorN();
	}
	arr = new double[N];
	for (int i = 0; i < N; i++) {
		arr[i] = getA()[i] + v.getA()[i];
	}
	PrivateVectorN result(N, arr);
	return result;
}
PrivateVectorN PrivateVectorN::Substract(PrivateVectorN v) {
	double *arr;
	if (N != v.N) {
		cout << "Vectors should have same size!";
		return PrivateVectorN();
	}
	arr = new double[N];
	for (int i = 0; i < N; i++) {
		arr[i] = getA()[i] - v.getA()[i];
	}
	PrivateVectorN result(N, arr);
	return result;
}
double PrivateVectorN::Scalar(PrivateVectorN v) {
	double scal = 0;
	if (N != v.N) {
		cout << "Vectors should have same size!";
		return scal;
	}
	for (int i = 0; i < N; i++) {
		scal += getA()[i] * v.getA()[i];
	}
	return scal;
}

PrivateVectorN& PrivateVectorN::operator ++ () {
	for (int i = 0; i < N; i++) {
		++a[i];
	}
	return *this;
}
PrivateVectorN& PrivateVectorN::operator -- () {
	for (int i = 0; i < N; i++) {
		--a[i];
	}
	return *this;
}
PrivateVectorN PrivateVectorN::operator ++ (int) {
	PrivateVectorN result(N, a);
	for (int i = 0; i < N; i++) {
		a[i]++;
	}
	return result;
}
PrivateVectorN PrivateVectorN::operator -- (int) {
	PrivateVectorN result(N, a);
	for (int i = 0; i < N; i++) {
		a[i]--;
	}
	return result;
}

PrivateVectorN& PrivateVectorN::operator = (const PrivateVectorN& v) {
    setN(v.getN());
    setA(v.getA());
    return *this;
} 

ostream& operator << (ostream& out, PrivateVectorN& v) {
	return out << v.toString() << endl;
}
istream& operator >> (istream& in, PrivateVectorN& v) {
  	int n = -1;
	double *a;
	cout << "Enter number of elements: ";
	in >> n;
	while (n < 0) {
		cout << "Number should be greater than zero!\n"
			 << "Enter number of elements: ";
		in >> n;
	}
	a = new double[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter " << i + 1 << " element: ";
		in >> a[i];
	}
	v.setN(n);
	v.setA(a);
 	return in;
}