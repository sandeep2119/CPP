//Write a program that takes an input of string and displays the reverse of the string. 
//It should be a function that takes a char*  as arg and returns the char* with reversed value.


#include <iostream>
#include<cstring>
using namespace std;

int length{};

char* revFunc(char *str) {
	char temp;
	int j{};
	j = strlen(str)-1;
	for (int i = 0;i <= j;i++,j--) {  //--------reversing block
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return str;
}

int main()
{
	char *myString = new char[30];
	int length;

	cout << "Enter a String:"<<endl;
	cin >> myString;
	
	cout << endl;
	
	cout<<"Reverse of String is : \n"<<revFunc(myString)<<endl;
}


