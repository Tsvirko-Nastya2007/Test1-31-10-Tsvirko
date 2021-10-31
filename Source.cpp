//Tsvirko Nastya
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//#1
	/*int a, b, c;
	cin >> a >> b >> c;
	if (a >= 0 && b >= 0 && c >= 0) {
		cout << "pos " << 3;
		cout << "neg " << 0;
	}
	else if (a * b * c == 0) {
		cout << "pos " << 1;
		cout << "neg " << 2;
	}
	else {
		cout << "pos " << 0;
		cout << "neg " << 3;
	}*/
	//
	//#2
	/*double a, y;
	cin >> a;
	if (a > 0) {
		y = 2*a - 10;
	}
	else if (a == 0) {
		y = 0;
	}
	if (a < 0) {
		y = 2 * abs(a) - 1;
	}
	cout << y;*/
	//
	//#3
	/*double x, y;
	cin >> x >> y;
	if (x > 0 && y > 0) {
		cout << 1;
	}
	if (y > 0 && x < 0) {
		cout << 2;
	}
	if (x < 0 && y < 0) {
		cout << 3;
	}
	if (x > 0 && y < 0) {
		cout << 4;
	}*/
	//
	//#4
	double a, b;
	cout << "Vosrast: " << endl;
	cin >> a;
	cout << "Stag:" << endl;
	cin >> b;
	if (b >= 20 && a >= 42) {
		cout << "Ok";
	}
	else {
		cout << "No.";
	}
	return 0;
}