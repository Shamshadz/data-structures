/*Write a function power() to raise a number m to a power n.  The

function takes a double value for m and int value for n and returns

the result correctly.  Use a default value of 2 for n to make the

function to calculate squares when this argument is omitted.

Write a main that gets the values of m and n from the user to test

the function.*/

#include<iostream>
using namespace std;

double power(double,int=2);

int main()
{
	int p;
	double n,r;
	cout << "Enter number : ";
	cin >> n;
	cout << "Enter exponent : ";
	cin >> p;
	r = power(n,p);
	cout << "Result is " << r;
	r = power(n);
	cout << "\nResult without passing exponent is " << r;
	
	return 0;
}

double power(double a, int b)
{
	double x = 1;
	for(int i = 1; i <= b; i++)
		x = x * a;
	return x;
	cout << "Result is " << r;
}
