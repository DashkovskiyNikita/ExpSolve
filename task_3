#include<iostream>

using namespace std;

double fun(double& prev,double x,int& i,int& n){
	if (i > n) return 0;
	prev = prev * x * x / i;
	double result = prev * (i * 2.0 + 1);
	++i;
	return result + fun(prev,x,i,n);
}



int main() {

	double prev = 1, x;
	int i = 1, n;

	cin >> x >> n;

	cout << fun(prev, x, i, n) << endl;
	
	return 0;

}
