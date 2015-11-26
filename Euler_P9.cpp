/*


Program Description : Poroject Euler Problem 9->
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

Written By : Robert Brewer
IDE Used : Visual Studio Express 2013for Windows Desktop
*/



#define _CRT_SECURE_NO_WARNINGS//Prevents compiler errors while using 
//Microsoft Visual

#include <iostream> // For cout and cin
using namespace std;

void FindPythagTriplet();
bool isPythagoreanTriplet(int a, int b, int c);


int main(){

	FindPythagTriplet();
	return 0;
}

void FindPythagTriplet(){

	int a;
	int sumTotal = 1000;
	bool PythagTriplet = false;
	for (a = 1; a < sumTotal ; a++){
		for (int b = a; b < sumTotal-a; b++){
			int c = sumTotal - a - b;
			if (a < b && b < c){
				if (isPythagoreanTriplet(a, b, c)){
					int prod = a*b*c;
					cout << a << " + " << b << " + " << c << " = " << (a + b + c) << endl;
					cout << a << " * " << b << " * " << c << " = " << prod << endl;
					PythagTriplet = true;
				}
			}	
		} //end for (int b = a; b < sumTotal-a; b++)		
	}// end for (a = 1; a < sumTotal ; a++)
	if (!PythagTriplet)
		cout << "No Pythag Triplet is not found" << endl;
}

bool isPythagoreanTriplet(int a, int b, int c){

	if ((a*a + b*b) == c*c)
		return true;
	else
		return false;
}