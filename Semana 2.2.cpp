#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	//declarar variables
	int alumno=5;
	int notas=7;
	int mat[alumno][notas];
	double promedio[alumno];

    //ingresar calificaciones y calcular promedio
	for(int i=0;i<alumno;i++){
		
		double suma=0;
			
		for(int j=0;j<notas;j++){
			cout<<"ingrese la nota "<<j+1<<" del alumno "<<i+1<<": ";
			cin>>mat[i][j];
			
			suma+=mat[i][j];
		}
		promedio[i]=suma/notas;
	}
	
	cout<<"\nresultados:"<<endl;
	
	//imprimir resultados 
	for(int k=0;k<alumno;k++){
		cout<<"alumno "<<k+1<<": "<<"promedio: "<<promedio[k]<<" - ";
		
		if(promedio[k]==100){
			cout<<"excelente";
		} else if(promedio[k]>=90 && promedio[k]<=99){
			cout<<"muy bien";
		} else if(promedio[k]>=80 && promedio[k]<=89){
			cout<<"bien";
		} else if(promedio[k]>=70 && promedio[k]<=79){
			cout<<"hay que mejorar";
		} else if(promedio[k]<70){
			cout<<"reprobado";
		}
		cout<<endl;
	}
	
	return 0;
}