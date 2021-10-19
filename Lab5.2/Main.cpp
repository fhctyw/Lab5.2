#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);

int main()
{
	double xp, xk, dx, x, eps, a, R = 0, s = 0;
	int n;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "----------------------------------" << endl;
	cout << "|" << setw(7) << "x|"
		<< setw(11) << "exp(-x^2)|"
		<< setw(11) << "S|"
		<< setw(4) << "n|" << endl;
	cout << "----------------------------------" << endl;

	for (x = xp; x <= xk; x += dx)
	{
		S(x, eps, n, s);

		cout << "|" << setw(6) << setprecision(2) << x << "|"
			<< setw(10) << setprecision(4) << exp(-(x * x)) << "|"
			<< setw(10) << setprecision(4) << s << "|"
			<< setw(3) << n << "|" << endl;
	}
	cout << "----------------------------------" << endl;
	return 0;
}

void S(const double x, const double eps, int& n, double& s)
{
	n = 0;
	double a = 1;
	s = a;
	do
	{
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
}

void A(const double x, const int n, double& a)
{
	double R = -(x * x) / n;
	a *= R;
}
