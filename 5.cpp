//Write a program which accept temperature in Farenheit and print it in centigrade

#include <iostream>
using namespace std;

int main() {
	float c,f;
	cout<<"Enter the Temperature in Fahrenheit : "<<endl;
	cin>>f;
	c = (f-32)*5/9;
	cout<<"The Temperature in Centigrade is :"<<c<<endl;
	return 0;
}
