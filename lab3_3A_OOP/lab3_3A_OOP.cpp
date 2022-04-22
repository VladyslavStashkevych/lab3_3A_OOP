#include "VectorN.h"
#include "PrivateVectorN.h"

int main() {
	VectorN s(3, new double[3] {1, 2, 3});
	cout << "Vector s: " << s;
	s = s + s;
	cout << "Vector s after changes (s + s): " << s;
	cout << "Scalar (s, s): " << s * s << endl;

	PrivateVectorN v, f(s.getN(), s.getA());
	cin >> v;
	cout << "Vector V: " << v;
	cout << "Vector S: " << f;
	PrivateVectorN c = f-- - ++v;
	cout << "Vector C = S-- - ++V: " << c;
	cout << "Scalar (s, v): " << f * v << endl;

	return 0;
}
