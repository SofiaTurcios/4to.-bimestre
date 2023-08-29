#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
	char palabra[100];
	int longitud;
	
	cout<<"ingrese una cadena: ";
	gets(palabra);
	//cin.getline(palabra,5,'\n'); 
    
    longitud=strlen(palabra);
    
	if(longitud>=10){
    	cout<<palabra;	
	} else{
		cout<<"no hay suficientes caracteres";
	}
	
	cout<<"\nla cantidad de caracteres que posee la palabra: "<<longitud;
	
	return 0;
	getch();
}