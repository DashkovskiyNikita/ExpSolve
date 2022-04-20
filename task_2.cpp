#include <iostream>
using namespace std;

class Exp {
public:
    void accuracy(const double x,const double e) {
        
        double current = 1, previous = 0;
        int k = 1;

        do {
            previous = current;
            current = fun(x, k);
            ++k;
        } while (abs(current - previous) > e);

        printf("x = %g  e = %g  k = %d \n", x, e, k);
    }

    double fun(const double x, const int n) {
        return (2.0 * n + 1) * pow(x, 2 * n) / fact(n);
    }

    double fact(const int n) {
        return (n == 0) ? 1 : n * fact(n - 1);
    }
};

int main()
{
    double e = 0.01, x;
    cin >> x;

    Exp exp;

    for (int i = 1; i <= 9; i++) {
        exp.accuracy(x, e);
        e /= 10;
    }
}
