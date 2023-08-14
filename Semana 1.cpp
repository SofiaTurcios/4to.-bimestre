#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int vectorN[5];
	int vectorR;
	
	cout<<"escriba un numero: "<<endl;
	for(int i=0;i<5;i++){
		cin>>vectorN[i];
	}
	
	cout<<" "<<endl;
	
	cout<<"el vector N es: "<<endl;
	for(int j=0;j<5;j++){
		cout<<vectorN[j]<<" ";
	}
	
	cout<<" "<<endl;

	cout<<"el vector R es: "<<endl; 
		for(int k=0;k<5;k++){
		vectorR=vectorN[k]*2;
		cout<<vectorR<<" ";
	}
	
	return 0;
}