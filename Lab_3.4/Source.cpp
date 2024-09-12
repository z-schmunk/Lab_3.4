#include <iostream>
using namespace std;

int main() {
	double cost, mpg, miles, gapr, year, reamo;
	cout << " What is your cost of car?\n";
	cin >> cost;
	cout << " What is your average miles per gallon?\n";
	cin >> mpg;
	cout << " What is your miles driven per year?\n";
	cin >> miles;
	cout << " What is gas price for your car?\n";
	cin >> gapr;
	cout << " How many years of use for the car?\n";
	cin >> year;
	cout << " What is your car's resale value?\n";
	cin >> reamo;
	int tot = cost + (((miles / mpg) * gapr) * year) - reamo;
	cout << " Your net cost is " << tot << ".\n";
}