#include "Base.h"

void Base::setA(double *value){
	a = new double[N];
	for (int i = 0; i < N; i++) {
		a[i] = value[i];
	}
}
Base::Base() {
	setN(0);
	setA(new double[0]);
}
Base::Base(const int N, double *a) {
	setN(N);
	setA(a);
}
Base::Base(const Base &v) {
	*this = v;
}

string Base::toString() {
	stringstream result;
	for (int i = 0; i < N; i++) {
		result << a[i] << " ";
	}
	return result.str();
}

ostream& operator << (ostream& out, Base& v) {
	return out << v.toString() << endl;
}
istream& operator >> (istream& in, Base& v) {
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