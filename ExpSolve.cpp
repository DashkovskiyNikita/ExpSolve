#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Exp {
private:
	int n;
	double x;
	double* values;
public:
	Exp(int n, double x) {
		this->n = n;
		this->x = x;
		values = new double[n + 1];
		values[0] = 1;
	}

	double calculate() {

		double r = 1;

		for (int i = 1; i <= n; i++) {
			r = r * x * x / i;
			values[i] *= (i * 2 + 1) * r;
		}

		return sum();
	}

private:
	double sum() {
		double result = 0;
		for (int i = 0; i <= n; i++) result += values[i];
		return result;
	}
};

int main()
{
	int n, x;
	cin >> n >> x;

	Exp exp(n, x);

	cout << exp.calculate() << endl;
}
