#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
	//declarar las variables
	string a[20];
	string dato;
	char band='F';
	
	//solicitar datos
	for(int i=0;i<5;i++){
		cout<<"ingrese su nombre: ";
		cin>>a[i];
	}
	
	//solicitar que ingrese el numero a buscar
	cout<<"\nIngrese un nombre a buscar: ";
	cin>>dato;
	
	//algoritmo de busqueda secuencial
	int j;
	while((band=='F')&&(j<5)){
		if(a[j]==dato){
			band='V';
		}
		j++;
	}

	if(band=='F'){
		cout<<"\nEl nombre a buscar no esta en la lista";
	}
	else if(band=='V'){
		cout<<"su nombre "<<dato<<" fue encontrado en la posicion "<<j;
	}
	
	getch();
	return 0;
}
