
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(const double x);

int main()
{
	double tp, tk, n, t;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;

	double tg = (tk - tp) / n;

	t = tp;

	while (t <= tk) {
		double z = f(t * t) + 2 * f(2 * t + 1);

		cout << t << "  " << z << endl;

		t += tg;
	}

	cin.get();
	system("pause");
	return 0;
}

double f(const double x) {
	if (abs(x) >= 1)
		return (sin(x) + 1) / (sin(x) + cos(x));
	else {
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do {
			i++;
			double R = (x * x) / (2.0 * i * (2.0 * i + 1));
			a *= R;
			S += a;
		} while (i < 8);
		return S;
	}
}
		


