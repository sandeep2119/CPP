//Write a menu driven C++ program with following option
//a. Accept elements of an array
//b. Display elements of an array

#include <iostream>
using namespace std;

int n;
int Array[5];


void AcceptValue(){
	cout<<"Enter size of Array : "<<endl;
	cin>>n;
	cout<<"Enter Elements into Array : "<<endl;
	for(int i=0;i<n;i++){
		cin>>Array[i];
	}
	
}
void Display(){
	cout<<"The Elements in the Array : "<<endl;
	for(int i=0;i<n;i++){
		cout<<Array[i]<<endl;
	}
}

int main() {
	
	int choice;
	
    do
	
	{
    	cout<<"---------------MENU---------------\n"<<"1. Accepting Elements \n"<<"2. Diplaying Elements\n"<<"3. Exit\n"<<endl;
	    cin>>choice;
	    switch(choice)	{
	    	
	    	
		    case 1 : AcceptValue();
		             break;
		         
		    case 2 : Display();
		             break;
		         
	    	case 3 : 
		            break;
		
		    default : cout<<"Invalid Choice";
		             break;
        }
    	
    	
   }while(choice < 3 && choice != 0);
   
	return 0;
}


