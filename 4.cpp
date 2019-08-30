// Write a program which accept principle, rate and time from user and print the simple interest.

#include <iostream>
using namespace std;


int main() {
	float p,t,r,SI;
	cout<<"Enter Principle Amount :"<<endl;
	cin>>p;
	cout<<"Enter Time  :"<<endl;
	cin>>t;
	cout<<"Enter Rate of Interest for Principle Amount :"<<endl;
	cin>>r;
	SI = (p*t*r)/100;
	cout<<"The Simple Interest for the Amount is :"<<SI<<endl;
	return SI;
}



