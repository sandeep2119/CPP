//Develop a Function to check if two numbers are equal without using arithmetic operators or comparison operators.

#include<iostream>
using namespace std;    

void Func(int FirstNumber,int SecondNumber){
     
     cout<<"Enter First Number : "<<endl;
     cin>>FirstNumber;
     cout<<"Enter Second Number : "<<endl;
     cin>>SecondNumber;
	
	if (FirstNumber ^ SecondNumber)
	cout<<"Both Are Not Equal"<<endl;
	else
	cout<<"Both Are Equal"<<endl;
}

int main(){
	int a,b;
	Func(a,b);
	return 0;
}
