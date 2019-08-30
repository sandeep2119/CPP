//Write a function to calculate the factorial value of any integer as an argument. Call this function from main( ) and print the results in main( ). 


#include <iostream>
using namespace std;

void Factorial(int n){
	int fact=1;
	cout<<"Enter a Number : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		fact = fact * i;
	}
	
	cout<<"Factorial of a Given Number is : "<<fact<<endl;
}

int main() {
	int a;
	Factorial(a);
	return 0;
}


