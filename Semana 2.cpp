#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	//variables
	int matriz[3][3];
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			//mensaje para que ingrese los datos
			cout<<"ingrese el dato de la posicion "<<i+1<<j+1<<": ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<"\nImprimiendo matriz\n";
	for(int k=0;k<3;k++){
		for(int l=0;l<3;l++){
			cout<<matriz[k][l]<<" ";
		}
		cout<<"\n";
	}		
	
	cout<<"\nla matriz en diagonal es: \n";
	for(int m=0;m<3;m++){
			cout<<matriz[m][m]<<" ";
	}
 
	return 0;
	getch();
}