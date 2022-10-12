#include <iostream>
#include <iomanip>
using namespace std;

int getinput(int &a, int &b);
int swapTwoValues(float &a, float &b);

int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

int getinput(int &a, int &b) {
	cout << "Enter two integers: ";
	cin >> a >> b;
}

int swapTwoValues(float &a, float &b) {
	float temp;
	temp = a;
	a = b;
	b = temp;
}