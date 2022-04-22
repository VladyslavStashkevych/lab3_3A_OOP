#include "VectorN.h"

VectorN VectorN::Add(VectorN v) {
	double *arr;
	if (N != v.N) {
		cout << "Vectors should have same size!";
		return VectorN();
	}
	arr = new double[N];
	for (int i = 0; i < N; i++) {
		arr[i] = getA()[i] + v.getA()[i];
	}
	VectorN result(N, arr);
	return result;
}
VectorN VectorN::Substract(VectorN v) {
	double *arr;
	if (N != v.N) {
		cout << "Vectors should have same size!";
		return VectorN();
	}
	arr = new double[N];
	for (int i = 0; i < N; i++) {
		arr[i] = getA()[i] - v.getA()[i];
	}
	VectorN result(N, arr);
	return result;
}
double VectorN::Scalar(VectorN v) {
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

VectorN& VectorN::operator ++ () {
	for (int i = 0; i < N; i++) {
		++a[i];
	}
	return *this;
}
VectorN& VectorN::operator -- () {
	for (int i = 0; i < N; i++) {
		--a[i];
	}
	return *this;
}
VectorN VectorN::operator ++ (int) {
	VectorN result(N, a);
	for (int i = 0; i < N; i++) {
		a[i]++;
	}
	return result;
}
VectorN VectorN::operator -- (int) {
	VectorN result(N, a);
	for (int i = 0; i < N; i++) {
		a[i]--;
	}
	return result;
}

VectorN& VectorN::operator = (const VectorN& v) {
    setN(v.getN());
    setA(v.getA());
    return *this;
} 