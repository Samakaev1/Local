#include <iostream>
using namespace std;

int sum(int a, int b);
int mult(int a, int b);

int main() {
	int a, b;

	cout << "input 1-st number ";
	cin >> a;

	cout << "input 2-nd number ";
	cin >> b;

	cout << "sum of numbers = " << sum(a, b) << endl;
	cout << "mult of numbers = " << mult(a, b) << endl;

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
int mult(int a, int b) {
	return a * b;
}
