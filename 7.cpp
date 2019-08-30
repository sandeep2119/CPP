//Write a program to check whether the given number is positive or negative (using ? : ternary operator )

#include <iostream>
using namespace std;


int main() {
	int n;
	cout<<"Enter Number : "<<endl;
	cin>>n;
	(n >= 0 ? cout<<"Positive Number" : cout<<"Negative Number");
	return 0;
}
