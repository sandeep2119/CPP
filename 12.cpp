// Write a function called zero_small() that has two integer arguments being passed by reference and sets the smaller of the two numbers to 0.
// Write the main program to access the function. 


#include<iostream>
using namespace std;


void zero_small(int *c, int *d) {
	if (*c > *d) {
		*d = 0;
	}
	else {
		*c = 0;
	}
}


int main() {
	int a, b;

	cout << "Enter value for a: "<<endl;
	cin >> a;
	cout << "\nEnter value for b: "<<endl;
	cin >> b;
	zero_small(&a, &b);

	cout << "a = " << a;
	cout << "\nb = " << b;

	return 0;
}


