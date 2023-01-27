#include <iostream>
using namespace std;
/*
int GCD(int m, int n) {
	if (m == 0)
		return n;
	if (n == 0)
		return m;
	if (m == n)
		return m;
	return m > n ? GCD(m % n, n) : GCD(m, n % m);
}*/

int main() {
	int a, b;
	cin >> a >> b;
	//cout << "Greatest common divisor of "s << a << " and "s << b << " is "s << GCD(a, b) << endl;
	int m = a, n = b; // m0, n0
	int x = 1, y = 0, w = 0, z = 1; // m0 = a * x0 + b * y0, n0 = a * w0 + b * z0
	//GCD(a,b) = GCD(m,n)
	while (!(m == 0 || n == 0)) {
		// m_k = a * x_k + b * y_k, n_k = a * w_k + b * z_k
		if (m >= n) {
			// mk >= nk => m_{k+1} = m_k % n_k = m_k - m_k/n_k * n_k = (x_k - m_k/n_k * w_k) a + (y_k - m_k/n_k * z_k) b
			x -= (m / n) * w;
			y -= (m / n) * z;
			m = m % n;
		}
		else {
			//see explanation in case above, here analogous but with m and n switched
			w -= (n / m) * x;
			z -= (n / m) * y;
			n = n % m;
		}
		// GCD(m,n) = GCD(m mod n, n) if m >= n, GCD(m,n) = GCD(m, n mod m) if m < n
	}
	if (m == 0) {
		cout << "Greatest common divisor of "s << a << " and "s << b << " is "s << n << endl;
		cout << "Solution to "s << a << "x + "s << b << "y = "s << n << " is "s << " x = "s << w << " and y = "s << z << endl;
		cout << "Check: "s << a << "*"s << w << " + " << b << "*"s << z << " = "s << a * w + z * b << endl;
	}
	else {
		cout << "Greatest common divisor of "s << a << " and "s << b << " is "s << m << endl;
		cout << "Solution to "s << a << "x + "s << b << "y = "s << m << " is "s << " x = "s << x << " and y = "s << y << endl;
		cout << "Check: "s << a << "*"s << x << " + " << b << "*"s << y << " = "s << a * x + b * y << endl;
	}
	return 0;
}