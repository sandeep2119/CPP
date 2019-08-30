//Write a C++ program to find the sum and average of one dimensional integer array.

#include<iostream>

using namespace std;




int main(){
	int n;
    float sum=0;
	
	cout<<"Enter Size of Array : "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter Elements in the Array : "<<endl;
    for(int i=0;i<n;i++){
    	cin>>array[i];		
	}
     cout<<"Elements in the Array : "<<endl;
     for(int i=0;i<n;i++){
    	cout<<array[i]<<endl;	
	}
	cout<<"Sum of One Dimensional Array : "<<endl;
	for(int i=0;i<n;i++){
		sum = sum + array[i];
		cout<<sum<<endl;	
	}
	float avg = sum/n;
	cout<<"Average % : "<<endl;
	cout<<avg;
	return 0;

}
